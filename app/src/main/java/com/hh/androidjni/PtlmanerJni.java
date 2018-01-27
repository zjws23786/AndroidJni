package com.hh.androidjni;

/**
 * Created by huajz on 2018/1/27 0027.
 */
public class PtlmanerJni {

    static {
        System.loadLibrary("myjni");
    }

    public native String getString();

}
