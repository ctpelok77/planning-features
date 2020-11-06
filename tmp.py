#!/usr/bin/env python

import sys, os, json

def get_static_info(filename):
    with open(filename, "r") as s:
        data = json.load(s)
        return data['domain'], data['problem'], data['algorithm']


def get_init_value(filename):
    with open(filename, "r") as s:
        data = json.load(s)
        if "initial_h_value" in data:
            return data["initial_h_value"]
        return None

def get_features(filename):
    with open(filename, "r") as s:
        data = json.load(s)
        data = data['instance_features']
        for prob in data:
            return prob, data[prob]        

def main(files, outfile):
    res = {}
    for fl in files:
        static = get_static_properties(fl)
        domain, problem, alg = get_static_info(static)
        features_fname = get_features_filename(fl)
        prob, data = get_features(features_fname)
        
        if prob not in res:
	    res[prob] = { 'domain' : domain,
                          'problem' : problem,
                          'data' : data }
        else:
            print("!!!!!!!!!!!!!!!!!!!!!! PROBLEM !!!!!!!!!!!!")
            exit(1)
    with open(outfile, "w") as f:
        json.dump(res, f, sort_keys=True, indent=4, separators=(',', ': '))

def get_properties(filename):
    dirpath = os.path.dirname(os.path.abspath(filename))
    return os.path.join(dirpath, "properties")

def get_static_properties(filename):
    dirpath = os.path.dirname(os.path.abspath(filename))
    return os.path.join(dirpath, "static-properties")

def get_features_filename(filename):
    dirpath = os.path.dirname(os.path.abspath(filename))
    return os.path.join(dirpath, "features.json")

if __name__ == "__main__":
    with open(sys.argv[1], "r") as f:
        main(f.readlines(), sys.argv[2])
