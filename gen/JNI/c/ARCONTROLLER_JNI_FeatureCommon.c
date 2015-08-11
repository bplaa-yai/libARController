/**********************************************************
 *            AUTOGENERATED FILE                          *
 *             DO NOT MODIFY IT                           *
 *                                                        *
 * To add new commands :                                  *
 *  - Modify ../Xml/commands.xml file                     *
 *  - Re-run generateFeatureControllers.py script         *
 *                                                        *
 **********************************************************/

/**
* @file ARCONTROLLER_JNI_FeatureCommon
* @brief ARCONTROLLER_FEATURE_Common_t JNI feature common c file.
*/

/*****************************************
 *
 *             include file :
 *
 *****************************************/

#include <jni.h>
#include <stdlib.h>

#include <libARSAL/ARSAL_Print.h>

#include <libARController/ARCONTROLLER_Error.h>
#include <libARController/ARCONTROLLER_Feature.h>

/*****************************************
 *
 *             define :
 *
 *****************************************/

#define ARCONTROLLER_JNIFEATURECOMMON_TAG "ARCONTROLLER_JNI_FeatureCommon"

/*****************************************
 *
 *             private header:
 *
 *****************************************/


/*****************************************
 *
 *             implementation :
 *
 *****************************************/

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonNetworkEventDisconnectionCause (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_NETWORKEVENT_DISCONNECTION_CAUSE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonSettingsStateProductNameChangedName (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTNAMECHANGED_NAME);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonSettingsStateProductVersionChangedSoftware (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTVERSIONCHANGED_SOFTWARE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonSettingsStateProductVersionChangedHardware (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTVERSIONCHANGED_HARDWARE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonSettingsStateProductSerialHighChangedHigh (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTSERIALHIGHCHANGED_HIGH);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonSettingsStateProductSerialLowChangedLow (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_PRODUCTSERIALLOWCHANGED_LOW);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonSettingsStateCountryChangedCode (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_COUNTRYCHANGED_CODE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonSettingsStateAutoCountryChangedAutomatic (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_SETTINGSSTATE_AUTOCOUNTRYCHANGED_AUTOMATIC);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateBatteryStateChangedPercent (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_BATTERYSTATECHANGED_PERCENT);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageStateListChangedMassstorageid (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGESTATELISTCHANGED_MASS_STORAGE_ID);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageStateListChangedName (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGESTATELISTCHANGED_NAME);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoStateListChangedMassstorageid (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED_MASS_STORAGE_ID);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoStateListChangedSize (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED_SIZE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoStateListChangedUsedsize (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED_USED_SIZE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoStateListChangedPlugged (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED_PLUGGED);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoStateListChangedFull (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED_FULL);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoStateListChangedInternal (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOSTATELISTCHANGED_INTERNAL);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateCurrentDateChangedDate (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_CURRENTDATECHANGED_DATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateCurrentTimeChangedTime (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_CURRENTTIMECHANGED_TIME);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoRemainingListChangedFreespace (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOREMAININGLISTCHANGED_FREE_SPACE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoRemainingListChangedRectime (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOREMAININGLISTCHANGED_REC_TIME);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateMassStorageInfoRemainingListChangedPhotoremaining (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_MASSSTORAGEINFOREMAININGLISTCHANGED_PHOTO_REMAINING);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateWifiSignalChangedRssi (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_WIFISIGNALCHANGED_RSSI);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateSensorsStatesListChangedSensorName (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED_SENSORNAME);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateSensorsStatesListChangedSensorState (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_SENSORSSTATESLISTCHANGED_SENSORSTATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateProductModelModel (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_PRODUCTMODEL_MODEL);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCommonStateCountryListKnownCountryCodes (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_COMMONSTATE_COUNTRYLISTKNOWN_COUNTRYCODES);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonOverHeatStateOverHeatRegulationChangedRegulationType (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_OVERHEATSTATE_OVERHEATREGULATIONCHANGED_REGULATIONTYPE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonControllerStateIsPilotingChangedPiloting (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CONTROLLERSTATE_ISPILOTINGCHANGED_PILOTING);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonWifiSettingsStateOutdoorSettingsChangedOutdoor (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_WIFISETTINGSSTATE_OUTDOORSETTINGSCHANGED_OUTDOOR);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonMavlinkStateMavlinkFilePlayingStateChangedState (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_STATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonMavlinkStateMavlinkFilePlayingStateChangedFilepath (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_FILEPATH);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonMavlinkStateMavlinkFilePlayingStateChangedType (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_MAVLINKSTATE_MAVLINKFILEPLAYINGSTATECHANGED_TYPE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonMavlinkStateMavlinkPlayErrorStateChangedError (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_MAVLINKSTATE_MAVLINKPLAYERRORSTATECHANGED_ERROR);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCalibrationStateMagnetoCalibrationStateChangedXAxisCalibration (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATECHANGED_XAXISCALIBRATION);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCalibrationStateMagnetoCalibrationStateChangedYAxisCalibration (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATECHANGED_YAXISCALIBRATION);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCalibrationStateMagnetoCalibrationStateChangedZAxisCalibration (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATECHANGED_ZAXISCALIBRATION);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCalibrationStateMagnetoCalibrationStateChangedCalibrationFailed (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTATECHANGED_CALIBRATIONFAILED);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCalibrationStateMagnetoCalibrationRequiredStateRequired (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONREQUIREDSTATE_REQUIRED);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCalibrationStateMagnetoCalibrationAxisToCalibrateChangedAxis (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONAXISTOCALIBRATECHANGED_AXIS);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCalibrationStateMagnetoCalibrationStartedChangedStarted (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CALIBRATIONSTATE_MAGNETOCALIBRATIONSTARTEDCHANGED_STARTED);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCameraSettingsStateCameraSettingsChangedFov (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CAMERASETTINGSSTATE_CAMERASETTINGSCHANGED_FOV);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCameraSettingsStateCameraSettingsChangedPanMax (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CAMERASETTINGSSTATE_CAMERASETTINGSCHANGED_PANMAX);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCameraSettingsStateCameraSettingsChangedPanMin (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CAMERASETTINGSSTATE_CAMERASETTINGSCHANGED_PANMIN);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCameraSettingsStateCameraSettingsChangedTiltMax (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CAMERASETTINGSSTATE_CAMERASETTINGSCHANGED_TILTMAX);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonCameraSettingsStateCameraSettingsChangedTiltMin (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CAMERASETTINGSSTATE_CAMERASETTINGSCHANGED_TILTMIN);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonFlightPlanStateAvailabilityStateChangedAvailabilityState (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_FLIGHTPLANSTATE_AVAILABILITYSTATECHANGED_AVAILABILITYSTATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonFlightPlanStateComponentStateListChangedComponent (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED_COMPONENT);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonFlightPlanStateComponentStateListChangedState (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_FLIGHTPLANSTATE_COMPONENTSTATELISTCHANGED_STATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonARLibsVersionsStateControllerLibARCommandsVersionVersion (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ARLIBSVERSIONSSTATE_CONTROLLERLIBARCOMMANDSVERSION_VERSION);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonARLibsVersionsStateSkyControllerLibARCommandsVersionVersion (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ARLIBSVERSIONSSTATE_SKYCONTROLLERLIBARCOMMANDSVERSION_VERSION);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonARLibsVersionsStateDeviceLibARCommandsVersionVersion (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ARLIBSVERSIONSSTATE_DEVICELIBARCOMMANDSVERSION_VERSION);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonAudioStateAudioStreamingRunningRunning (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_AUDIOSTATE_AUDIOSTREAMINGRUNNING_RUNNING);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonHeadlightsStateIntensityChangedLeft (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_HEADLIGHTSSTATE_INTENSITYCHANGED_LEFT);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonHeadlightsStateIntensityChangedRight (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_HEADLIGHTSSTATE_INTENSITYCHANGED_RIGHT);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonAnimationsStateListAnim (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ANIMATIONSSTATE_LIST_ANIM);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonAnimationsStateListState (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ANIMATIONSSTATE_LIST_STATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonAnimationsStateListError (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ANIMATIONSSTATE_LIST_ERROR);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonAccessoryStateSupportedAccessoriesListChangedAccessory (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ACCESSORYSTATE_SUPPORTEDACCESSORIESLISTCHANGED_ACCESSORY);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonAccessoryStateAccessoryConfigChangedNewAccessory (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_NEWACCESSORY);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonAccessoryStateAccessoryConfigChangedError (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGCHANGED_ERROR);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonAccessoryStateAccessoryConfigModificationEnabledEnabled (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_ACCESSORYSTATE_ACCESSORYCONFIGMODIFICATIONENABLED_ENABLED);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonChargerStateMaxChargeRateChangedRate (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_MAXCHARGERATECHANGED_RATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonChargerStateCurrentChargeStateChangedStatus (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_STATUS);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonChargerStateCurrentChargeStateChangedPhase (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_CURRENTCHARGESTATECHANGED_PHASE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonChargerStateLastChargeRateChangedRate (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_LASTCHARGERATECHANGED_RATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonChargerStateChargingInfoPhase (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_CHARGINGINFO_PHASE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonChargerStateChargingInfoRate (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_CHARGINGINFO_RATE);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonChargerStateChargingInfoIntensity (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_CHARGINGINFO_INTENSITY);
}

JNIEXPORT jstring JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeStaticGetKeyCommonChargerStateChargingInfoFullChargingTime (JNIEnv *env , jclass class)
{
    return (*env)->NewStringUTF(env, ARCONTROLLER_DICTIONARY_KEY_COMMON_CHARGERSTATE_CHARGINGINFO_FULLCHARGINGTIME);
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendNetworkDisconnect (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendNetworkDisconnect (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendSettingsAllSettings (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendSettingsAllSettings (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendSettingsReset (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendSettingsReset (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendSettingsProductName (JNIEnv *env, jobject thizz, jlong jFeature, jstring _name)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    const char *nativeName = (*env)->GetStringUTFChars(env, _name, 0);
    
    error = nativeFeature->sendSettingsProductName (nativeFeature, (char *)nativeName);

    // cleanup
    (*env)->ReleaseStringUTFChars(env, _name, nativeName);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendSettingsCountry (JNIEnv *env, jobject thizz, jlong jFeature, jstring _code)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    const char *nativeCode = (*env)->GetStringUTFChars(env, _code, 0);
    
    error = nativeFeature->sendSettingsCountry (nativeFeature, (char *)nativeCode);

    // cleanup
    (*env)->ReleaseStringUTFChars(env, _code, nativeCode);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendSettingsAutoCountry (JNIEnv *env, jobject thizz, jlong jFeature, jbyte _automatic)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendSettingsAutoCountry (nativeFeature, _automatic);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendCommonAllStates (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendCommonAllStates (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendCommonCurrentDate (JNIEnv *env, jobject thizz, jlong jFeature, jstring _date)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    const char *nativeDate = (*env)->GetStringUTFChars(env, _date, 0);
    
    error = nativeFeature->sendCommonCurrentDate (nativeFeature, (char *)nativeDate);

    // cleanup
    (*env)->ReleaseStringUTFChars(env, _date, nativeDate);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendCommonCurrentTime (JNIEnv *env, jobject thizz, jlong jFeature, jstring _time)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    const char *nativeTime = (*env)->GetStringUTFChars(env, _time, 0);
    
    error = nativeFeature->sendCommonCurrentTime (nativeFeature, (char *)nativeTime);

    // cleanup
    (*env)->ReleaseStringUTFChars(env, _time, nativeTime);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendCommonReboot (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendCommonReboot (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendOverHeatSwitchOff (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendOverHeatSwitchOff (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendOverHeatVentilate (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendOverHeatVentilate (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendWifiSettingsOutdoorSetting (JNIEnv *env, jobject thizz, jlong jFeature, jbyte _outdoor)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendWifiSettingsOutdoorSetting (nativeFeature, _outdoor);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendMavlinkStart (JNIEnv *env, jobject thizz, jlong jFeature, jstring _filepath, jint _type)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    const char *nativeFilepath = (*env)->GetStringUTFChars(env, _filepath, 0);
    
    error = nativeFeature->sendMavlinkStart (nativeFeature, (char *)nativeFilepath, _type);

    // cleanup
    (*env)->ReleaseStringUTFChars(env, _filepath, nativeFilepath);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendMavlinkPause (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendMavlinkPause (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendMavlinkStop (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendMavlinkStop (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendCalibrationMagnetoCalibration (JNIEnv *env, jobject thizz, jlong jFeature, jbyte _calibrate)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendCalibrationMagnetoCalibration (nativeFeature, _calibrate);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendGPSControllerPositionForRun (JNIEnv *env, jobject thizz, jlong jFeature, jdouble _latitude, jdouble _longitude)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendGPSControllerPositionForRun (nativeFeature, _latitude, _longitude);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendAudioControllerReadyForStreaming (JNIEnv *env, jobject thizz, jlong jFeature, jbyte _ready)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendAudioControllerReadyForStreaming (nativeFeature, _ready);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendHeadlightsIntensity (JNIEnv *env, jobject thizz, jlong jFeature, jbyte _left, jbyte _right)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendHeadlightsIntensity (nativeFeature, _left, _right);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendAnimationsStartAnimation (JNIEnv *env, jobject thizz, jlong jFeature, jint _anim)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendAnimationsStartAnimation (nativeFeature, _anim);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendAnimationsStopAnimation (JNIEnv *env, jobject thizz, jlong jFeature, jint _anim)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendAnimationsStopAnimation (nativeFeature, _anim);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendAnimationsStopAllAnimations (JNIEnv *env, jobject thizz, jlong jFeature)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendAnimationsStopAllAnimations (nativeFeature);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendAccessoryConfig (JNIEnv *env, jobject thizz, jlong jFeature, jint _accessory)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendAccessoryConfig (nativeFeature, _accessory);

    return error;
}

JNIEXPORT jint JNICALL
Java_com_parrot_arsdk_arcontroller_ARFeatureCommon_nativeSendChargerSetMaxChargeRate (JNIEnv *env, jobject thizz, jlong jFeature, jint _rate)
{
    // local declarations
    ARCONTROLLER_FEATURE_Common_t *nativeFeature = (ARCONTROLLER_FEATURE_Common_t*) (intptr_t) jFeature;
    eARCONTROLLER_ERROR error = ARCONTROLLER_OK;
    
    error = nativeFeature->sendChargerSetMaxChargeRate (nativeFeature, _rate);

    return error;
}

