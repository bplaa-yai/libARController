/**********************************************************
 *            AUTOGENERATED FILE                          *
 *             DO NOT MODIFY IT                           *
 *                                                        *
 * To add new commands :                                  *
 *  - Modify ../Xml/commands.xml file                     *
 *  - Re-run generateDeviceControllers.py script          *
 *                                                        *
 **********************************************************/

/**
 * @file ARFeatureCommonDebug.java
 * @brief Feature controller allow to send command related of commonDebug Feature.
 * All debug commands shared between all projects
 */
package com.parrot.arsdk.arcontroller;

import com.parrot.arsdk.arsal.ARSALPrint;
import com.parrot.arsdk.arcommands.*;
import com.parrot.arsdk.ardiscovery.ARDiscoveryDevice;

import java.util.List;
import java.util.ArrayList;

public class ARFeatureCommonDebug
{
    private static String TAG = "ARFeatureCommonDebug";
    
    public static String ARCONTROLLER_DICTIONARY_KEY_COMMONDEBUG_STATSEVENT_SENDPACKET_PACKET = ""; /**< Key of the argument </code>packet</code> of class <code>StatsEvent</code> in feature <code>CommonDebug</code> */

    private static native String nativeStaticGetKeyCommonDebugStatsEventSendPacketPacket ();

    private native int nativeSendStatsSendPacket (long jFeature, String packet);
    private native int nativeSendStatsStartSendingPacketFromDrone (long jFeature, byte frequency, byte packetSize, int date);
    private native int nativeSendStatsStopSendingPacketFromDrone (long jFeature);

    private long jniFeature;
    private boolean initOk;
    
    static
    {
        ARCONTROLLER_DICTIONARY_KEY_COMMONDEBUG_STATSEVENT_SENDPACKET_PACKET = nativeStaticGetKeyCommonDebugStatsEventSendPacketPacket ();
    }
    
    /**
     * Constructor
     */
    public ARFeatureCommonDebug (long nativeFeature)
    {
        initOk = false;
        
        if (nativeFeature != 0)
        {
            jniFeature = nativeFeature;
            initOk = true;
        }
    }

    /**
     * Dispose
     */
    public void dispose()
    {
        ARCONTROLLER_ERROR_ENUM error = ARCONTROLLER_ERROR_ENUM.ARCONTROLLER_OK;
        synchronized (this)
        {
            if(initOk == true)
            {
                jniFeature = 0;
                initOk = false;
            }
        }
    }

    /**
     * Destructor
     */
    public void finalize () throws Throwable
    {
        try
        {
            dispose ();
        }
        finally
        {
            super.finalize ();
        }
    }
    
    public ARCONTROLLER_ERROR_ENUM sendStatsSendPacket (String _packet)
    {
        ARCONTROLLER_ERROR_ENUM error = ARCONTROLLER_ERROR_ENUM.ARCONTROLLER_OK;
        synchronized (this)
        {
            if(initOk == true)
            {
                int nativeError = nativeSendStatsSendPacket (jniFeature, _packet);
                error = ARCONTROLLER_ERROR_ENUM.getFromValue(nativeError);
            }
        }
        return error;
    }
    
    public ARCONTROLLER_ERROR_ENUM sendStatsStartSendingPacketFromDrone (byte _frequency, byte _packetSize, int _date)
    {
        ARCONTROLLER_ERROR_ENUM error = ARCONTROLLER_ERROR_ENUM.ARCONTROLLER_OK;
        synchronized (this)
        {
            if(initOk == true)
            {
                int nativeError = nativeSendStatsStartSendingPacketFromDrone (jniFeature, _frequency, _packetSize, _date);
                error = ARCONTROLLER_ERROR_ENUM.getFromValue(nativeError);
            }
        }
        return error;
    }
    
    public ARCONTROLLER_ERROR_ENUM sendStatsStopSendingPacketFromDrone ()
    {
        ARCONTROLLER_ERROR_ENUM error = ARCONTROLLER_ERROR_ENUM.ARCONTROLLER_OK;
        synchronized (this)
        {
            if(initOk == true)
            {
                int nativeError = nativeSendStatsStopSendingPacketFromDrone (jniFeature);
                error = ARCONTROLLER_ERROR_ENUM.getFromValue(nativeError);
            }
        }
        return error;
    }
    

}

