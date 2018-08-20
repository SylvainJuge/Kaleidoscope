#pragma once

#define Consumer_NumericKeyPad CONSUMER_KEY(HID_CONSUMER_NUMERIC_KEY_PAD, KEY_FLAGS |  HID_TYPE_NARY )
#define Consumer_ProgrammableButtons CONSUMER_KEY(HID_CONSUMER_PROGRAMMABLE_BUTTONS, KEY_FLAGS |  HID_TYPE_NARY )
#define Consumer_MicrophoneCa CONSUMER_KEY(HID_CONSUMER_MICROPHONE_CA, KEY_FLAGS )
#define Consumer_HeadphoneCa CONSUMER_KEY(HID_CONSUMER_HEADPHONE_CA, KEY_FLAGS )
#define Consumer_GraphicEqualizerCa CONSUMER_KEY(HID_CONSUMER_GRAPHIC_EQUALIZER_CA, KEY_FLAGS )

#define Consumer_Plus10 CONSUMER_KEY(HID_CONSUMER_PLUS_10, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Plus100 CONSUMER_KEY(HID_CONSUMER_PLUS_100, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_AMSlashPM CONSUMER_KEY(HID_CONSUMER_AM_SLASH_PM, KEY_FLAGS |  HID_TYPE_OSC )

#define Consumer_Power CONSUMER_KEY(HID_CONSUMER_POWER, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_Reset CONSUMER_KEY(HID_CONSUMER_RESET, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Sleep CONSUMER_KEY(HID_CONSUMER_SLEEP, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Sleep_After CONSUMER_KEY(HID_CONSUMER_SLEEP_AFTER, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Sleep_Mode CONSUMER_KEY(HID_CONSUMER_SLEEP_MODE, KEY_FLAGS |  HID_TYPE_RTC )
#define Consumer_Illumination CONSUMER_KEY(HID_CONSUMER_ILLUMINATION, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_Function_Buttons CONSUMER_KEY(HID_CONSUMER_FUNCTION_BUTTONS, KEY_FLAGS |  HID_TYPE_NARY )

#define Consumer_Menu CONSUMER_KEY(HID_CONSUMER_MENU, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_MenuPick CONSUMER_KEY(HID_CONSUMER_MENU_PICK, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_MenuUp CONSUMER_KEY(HID_CONSUMER_MENU_UP, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_MenuDown CONSUMER_KEY(HID_CONSUMER_MENU_DOWN, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_MenuLeft CONSUMER_KEY(HID_CONSUMER_MENU_LEFT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_MenuRight CONSUMER_KEY(HID_CONSUMER_MENU_RIGHT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_MenuEscape CONSUMER_KEY(HID_CONSUMER_MENU_ESCAPE, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_MenuValueIncrease CONSUMER_KEY(HID_CONSUMER_MENU_VALUE_INCREASE, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_MenuValueDecrease CONSUMER_KEY(HID_CONSUMER_MENU_VALUE_DECREASE, KEY_FLAGS |  HID_TYPE_OSC )

#define Consumer_DataOnScreen CONSUMER_KEY(HID_CONSUMER_DATA_ON_SCREEN, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_ClosedCaption CONSUMER_KEY(HID_CONSUMER_CLOSED_CAPTION, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_ClosedCaptionSelect CONSUMER_KEY(HID_CONSUMER_CLOSED_CAPTION_SELECT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_VCRSlashTV CONSUMER_KEY(HID_CONSUMER_VCR_SLASH_TV, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_BroadcastMode CONSUMER_KEY(HID_CONSUMER_BROADCAST_MODE, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Snapshot CONSUMER_KEY(HID_CONSUMER_SNAPSHOT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Still CONSUMER_KEY(HID_CONSUMER_STILL, KEY_FLAGS |  HID_TYPE_OSC )

#define Consumer_Selection CONSUMER_KEY(HID_CONSUMER_SELECTION, KEY_FLAGS |  HID_TYPE_NARY )
#define Consumer_AssignSelection CONSUMER_KEY(HID_CONSUMER_ASSIGN_SELECTION, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_ModeStep CONSUMER_KEY(HID_CONSUMER_MODE_STEP, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_RecallLast CONSUMER_KEY(HID_CONSUMER_RECALL_LAST, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_EnterChannel CONSUMER_KEY(HID_CONSUMER_ENTER_CHANNEL, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_OrderMovie CONSUMER_KEY(HID_CONSUMER_ORDER_MOVIE, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Channel CONSUMER_KEY(HID_CONSUMER_CHANNEL, KEY_FLAGS |  HID_TYPE_LC )
#define Consumer_MediaSelection CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECTION, KEY_FLAGS |  HID_TYPE_NARY )
#define Consumer_MediaSelectComputer CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_COMPUTER, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectTV CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_TV, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectWww CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_WWW, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectDvd CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_DVD, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectTelephone CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_TELEPHONE, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectProgramGuide CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_PROGRAM_GUIDE, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectVideoPhone CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_VIDEO_PHONE, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectGames CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_GAMES, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectMessages CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_MESSAGES, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectCd CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_CD, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectVcr CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_VCR, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectTuner CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_TUNER, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_Quit CONSUMER_KEY(HID_CONSUMER_QUIT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Help CONSUMER_KEY(HID_CONSUMER_HELP, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_MediaSelectTape CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_TAPE, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectCable CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_CABLE, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectSatellite CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_SATELLITE, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectSecurity CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_SECURITY, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectHome CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_HOME, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_MediaSelectCall CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_CALL, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_ChannelIncrement CONSUMER_KEY(HID_CONSUMER_CHANNEL_INCREMENT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_ChannelDecrement CONSUMER_KEY(HID_CONSUMER_CHANNEL_DECREMENT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_MediaSelectSap CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_SAP, KEY_FLAGS |  HID_TYPE_SEL )

#define Consumer_VcrPlus CONSUMER_KEY(HID_CONSUMER_VCR_PLUS, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Once CONSUMER_KEY(HID_CONSUMER_ONCE, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Daily CONSUMER_KEY(HID_CONSUMER_DAILY, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Weekly CONSUMER_KEY(HID_CONSUMER_WEEKLY, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Monthly CONSUMER_KEY(HID_CONSUMER_MONTHLY, KEY_FLAGS |  HID_TYPE_OSC )

#define Consumer_Play CONSUMER_KEY(HID_CONSUMER_PLAY, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_Pause CONSUMER_KEY(HID_CONSUMER_PAUSE, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_Record CONSUMER_KEY(HID_CONSUMER_RECORD, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_FastForward CONSUMER_KEY(HID_CONSUMER_FAST_FORWARD, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_Rewind CONSUMER_KEY(HID_CONSUMER_REWIND, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_ScanNextTrack CONSUMER_KEY(HID_CONSUMER_SCAN_NEXT_TRACK, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_ScanPreviousTrack CONSUMER_KEY(HID_CONSUMER_SCAN_PREVIOUS_TRACK, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Stop CONSUMER_KEY(HID_CONSUMER_STOP, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Eject CONSUMER_KEY(HID_CONSUMER_EJECT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_RandomPlay CONSUMER_KEY(HID_CONSUMER_RANDOM_PLAY, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_SelectDisc CONSUMER_KEY(HID_CONSUMER_SELECT_DISC, KEY_FLAGS |  HID_TYPE_NARY )
#define Consumer_EnterDiscMc CONSUMER_KEY(HID_CONSUMER_ENTER_DISC_MC, KEY_FLAGS )
#define Consumer_Repeat CONSUMER_KEY(HID_CONSUMER_REPEAT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Tracking CONSUMER_KEY(HID_CONSUMER_TRACKING, KEY_FLAGS |  HID_TYPE_LC )
#define Consumer_Track_Normal CONSUMER_KEY(HID_CONSUMER_TRACK_NORMAL, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_SlowTracking CONSUMER_KEY(HID_CONSUMER_SLOW_TRACKING, KEY_FLAGS |  HID_TYPE_LC )
#define Consumer_FrameForward CONSUMER_KEY(HID_CONSUMER_FRAME_FORWARD, KEY_FLAGS |  HID_TYPE_RTC )
#define Consumer_FrameBack CONSUMER_KEY(HID_CONSUMER_FRAME_BACK, KEY_FLAGS |  HID_TYPE_RTC )
#define Consumer_Mark CONSUMER_KEY(HID_CONSUMER_MARK, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_ClearMark CONSUMER_KEY(HID_CONSUMER_CLEAR_MARK, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_RepeatFromMark CONSUMER_KEY(HID_CONSUMER_REPEAT_FROM_MARK, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_ReturnTo_Mark CONSUMER_KEY(HID_CONSUMER_RETURN_TO_MARK, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_SearchMarkForward CONSUMER_KEY(HID_CONSUMER_SEARCH_MARK_FORWARD, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_SearchMarkBackwards CONSUMER_KEY(HID_CONSUMER_SEARCH_MARK_BACKWARDS, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_CounterReset CONSUMER_KEY(HID_CONSUMER_COUNTER_RESET, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_ShowCounter CONSUMER_KEY(HID_CONSUMER_SHOW_COUNTER, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_TrackingIncrement CONSUMER_KEY(HID_CONSUMER_TRACKING_INCREMENT, KEY_FLAGS |  HID_TYPE_RTC )
#define Consumer_TrackingDecrement CONSUMER_KEY(HID_CONSUMER_TRACKING_DECREMENT, KEY_FLAGS |  HID_TYPE_RTC )
#define Consumer_StopSlashEject CONSUMER_KEY(HID_CONSUMER_STOP_SLASH_EJECT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_PlaySlashPause CONSUMER_KEY(HID_CONSUMER_PLAY_SLASH_PAUSE, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_PlaySlashSkip CONSUMER_KEY(HID_CONSUMER_PLAY_SLASH_SKIP, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Volume CONSUMER_KEY(HID_CONSUMER_VOLUME, KEY_FLAGS |  HID_TYPE_LC )
#define Consumer_Balance CONSUMER_KEY(HID_CONSUMER_BALANCE, KEY_FLAGS |  HID_TYPE_LC )
#define Consumer_Mute CONSUMER_KEY(HID_CONSUMER_MUTE, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_Bass CONSUMER_KEY(HID_CONSUMER_BASS, KEY_FLAGS |  HID_TYPE_LC )
#define Consumer_Treble CONSUMER_KEY(HID_CONSUMER_TREBLE, KEY_FLAGS |  HID_TYPE_LC )
#define Consumer_BassBoost CONSUMER_KEY(HID_CONSUMER_BASS_BOOST, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_SurroundMode CONSUMER_KEY(HID_CONSUMER_SURROUND_MODE, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_Loudness CONSUMER_KEY(HID_CONSUMER_LOUDNESS, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_Mpx CONSUMER_KEY(HID_CONSUMER_MPX, KEY_FLAGS |  HID_TYPE_OOC )
#define Consumer_VolumeIncrement CONSUMER_KEY(HID_CONSUMER_VOLUME_INCREMENT, KEY_FLAGS |  HID_TYPE_RTC )


#define Consumer_VolumeDecrement CONSUMER_KEY(HID_CONSUMER_VOLUME_DECREMENT, KEY_FLAGS |  HID_TYPE_RTC )

#define Consumer_SpeedSelect CONSUMER_KEY(HID_CONSUMER_SPEED_SELECT, KEY_FLAGS |  HID_TYPE_OSC )
#define Consumer_PlaybackSpeed CONSUMER_KEY(HID_CONSUMER_PLAYBACK_SPEED, KEY_FLAGS |  HID_TYPE_NARY )
#define Consumer_StandardPlay CONSUMER_KEY(HID_CONSUMER_STANDARD_PLAY, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_LongPlay CONSUMER_KEY(HID_CONSUMER_LONG_PLAY, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_ExtendedPlay CONSUMER_KEY(HID_CONSUMER_EXTENDED_PLAY, KEY_FLAGS |  HID_TYPE_SEL )
#define Consumer_Slow CONSUMER_KEY(HID_CONSUMER_SLOW, KEY_FLAGS |  HID_TYPE_OSC )

#define Consumer_FanEnable CONSUMER_KEY(HID_CONSUMER_FAN_ENABLE, KEY_FLAGS |  HID_TYPE_OOC)
#define Consumer_FanSpeed CONSUMER_KEY(HID_CONSUMER_FAN_SPEED, KEY_FLAGS |  HID_TYPE_LC)
#define Consumer_LightEnable CONSUMER_KEY(HID_CONSUMER_LIGHT_ENABLE, KEY_FLAGS |  HID_TYPE_OOC)
#define Consumer_LightIlluminationLevel CONSUMER_KEY(HID_CONSUMER_LIGHT_ILLUMINATION_LEVEL, KEY_FLAGS |  HID_TYPE_LC)
#define Consumer_ClimateControlEnable CONSUMER_KEY(HID_CONSUMER_CLIMATE_CONTROL_ENABLE, KEY_FLAGS |  HID_TYPE_OOC)
#define Consumer_RoomTemperature CONSUMER_KEY(HID_CONSUMER_ROOM_TEMPERATURE, KEY_FLAGS |  HID_TYPE_LC)
#define Consumer_SecurityEnable CONSUMER_KEY(HID_CONSUMER_SECURITY_ENABLE, KEY_FLAGS |  HID_TYPE_OOC)
#define Consumer_FireAlarm CONSUMER_KEY(HID_CONSUMER_FIRE_ALARM, KEY_FLAGS |  HID_TYPE_OSC)
#define Consumer_PoliceAlarm CONSUMER_KEY(HID_CONSUMER_POLICE_ALARM, KEY_FLAGS |  HID_TYPE_OSC)
#define Consumer_Proximity CONSUMER_KEY(HID_CONSUMER_PROXIMITY, KEY_FLAGS |  HID_TYPE_LC)
#define Consumer_Motion CONSUMER_KEY(HID_CONSUMER_MOTION, KEY_FLAGS |  HID_TYPE_OSC)
#define Consumer_DuressAlarm CONSUMER_KEY(HID_CONSUMER_DURESS_ALARM, KEY_FLAGS |  HID_TYPE_OSC)
#define Consumer_HoldupAlarm CONSUMER_KEY(HID_CONSUMER_HOLDUP_ALARM, KEY_FLAGS |  HID_TYPE_OSC)
#define Consumer_MedicalAlarm CONSUMER_KEY(HID_CONSUMER_MEDICAL_ALARM, KEY_FLAGS |  HID_TYPE_OSC)

#define Consumer_BalanceRight CONSUMER_KEY(HID_CONSUMER_BALANCE_RIGHT, KEY_FLAGS |  HID_TYPE_RTC)
#define Consumer_BalanceLeft CONSUMER_KEY(HID_CONSUMER_BALANCE_LEFT, KEY_FLAGS |  HID_TYPE_RTC)
#define Consumer_BassIncrement CONSUMER_KEY(HID_CONSUMER_BASS_INCREMENT, KEY_FLAGS |  HID_TYPE_RTC)
#define Consumer_BassDecrement CONSUMER_KEY(HID_CONSUMER_BASS_DECREMENT, KEY_FLAGS |  HID_TYPE_RTC)
#define Consumer_TrebleIncrement CONSUMER_KEY(HID_CONSUMER_TREBLE_INCREMENT, KEY_FLAGS |  HID_TYPE_RTC)
#define Consumer_TrebleDecrement CONSUMER_KEY(HID_CONSUMER_TREBLE_DECREMENT, KEY_FLAGS |  HID_TYPE_RTC)

#define Consumer_SpeakerSystem CONSUMER_KEY(HID_CONSUMER_SPEAKER_SYSTEM, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelLeft CONSUMER_KEY(HID_CONSUMER_CHANNEL_LEFT, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelRight CONSUMER_KEY(HID_CONSUMER_CHANNEL_RIGHT, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelCenter CONSUMER_KEY(HID_CONSUMER_CHANNEL_CENTER, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelFront CONSUMER_KEY(HID_CONSUMER_CHANNEL_FRONT, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelCenterFront CONSUMER_KEY(HID_CONSUMER_CHANNEL_CENTER_FRONT, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelSide CONSUMER_KEY(HID_CONSUMER_CHANNEL_SIDE, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelSurround CONSUMER_KEY(HID_CONSUMER_CHANNEL_SURROUND, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelLowFrequencyEnhancement CONSUMER_KEY(HID_CONSUMER_CHANNEL_LOW_FREQUENCY_ENHANCEMENT, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelTop CONSUMER_KEY(HID_CONSUMER_CHANNEL_TOP, KEY_FLAGS |  HID_TYPE_CL)
#define Consumer_ChannelUnknown CONSUMER_KEY(HID_CONSUMER_CHANNEL_UNKNOWN, KEY_FLAGS |  HID_TYPE_CL)

#define Consumer_SubChannel CONSUMER_KEY(HID_CONSUMER_SUB_CHANNEL, KEY_FLAGS |  HID_TYPE_LC)
#define Consumer_SubChannelIncrement CONSUMER_KEY(HID_CONSUMER_SUB_CHANNEL_INCREMENT, KEY_FLAGS |  HID_TYPE_OSC)
#define Consumer_SubChannelDecrement CONSUMER_KEY(HID_CONSUMER_SUB_CHANNEL_DECREMENT, KEY_FLAGS |  HID_TYPE_OSC)
#define Consumer_AlternateAudioIncrement CONSUMER_KEY(HID_CONSUMER_ALTERNATE_AUDIO_INCREMENT, KEY_FLAGS |  HID_TYPE_OSC)
#define Consumer_AlternateAudioDecrement CONSUMER_KEY(HID_CONSUMER_ALTERNATE_AUDIO_DECREMENT, KEY_FLAGS |  HID_TYPE_OSC)

#define Consumer_Application_Launch_Buttons CONSUMER_KEY(HID_CONSUMER_APPLICATION_LAUNCH_BUTTONS, KEY_FLAGS |  HID_TYPE_NARY)
#define Consumer_AL_Launch_Button_Configuration_Tool CONSUMER_KEY(HID_CONSUMER_AL_LAUNCH_BUTTON_CONFIGURATION_TOOL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Programmable_Button_Configuration CONSUMER_KEY(HID_CONSUMER_AL_PROGRAMMABLE_BUTTON_CONFIGURATION, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Consumer_Control_Configuration CONSUMER_KEY(HID_CONSUMER_AL_CONSUMER_CONTROL_CONFIGURATION, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Word_Processor CONSUMER_KEY(HID_CONSUMER_AL_WORD_PROCESSOR, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Text_Editor CONSUMER_KEY(HID_CONSUMER_AL_TEXT_EDITOR, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Spreadsheet CONSUMER_KEY(HID_CONSUMER_AL_SPREADSHEET, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Graphics_Editor CONSUMER_KEY(HID_CONSUMER_AL_GRAPHICS_EDITOR, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Presentation_App CONSUMER_KEY(HID_CONSUMER_AL_PRESENTATION_APP, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Database_App CONSUMER_KEY(HID_CONSUMER_AL_DATABASE_APP, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Email_Reader CONSUMER_KEY(HID_CONSUMER_AL_EMAIL_READER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Newsreader CONSUMER_KEY(HID_CONSUMER_AL_NEWSREADER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Voicemail CONSUMER_KEY(HID_CONSUMER_AL_VOICEMAIL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Contacts_Slash_Address_Book CONSUMER_KEY(HID_CONSUMER_AL_CONTACTS_SLASH_ADDRESS_BOOK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Calendar_Slash_Schedule CONSUMER_KEY(HID_CONSUMER_AL_CALENDAR_SLASH_SCHEDULE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Task_Slash_Project_Manager CONSUMER_KEY(HID_CONSUMER_AL_TASK_SLASH_PROJECT_MANAGER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Log_Slash_Journal_Slash_Timecard CONSUMER_KEY(HID_CONSUMER_AL_LOG_SLASH_JOURNAL_SLASH_TIMECARD, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Checkbook_Slash_Finance CONSUMER_KEY(HID_CONSUMER_AL_CHECKBOOK_SLASH_FINANCE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Calculator CONSUMER_KEY(HID_CONSUMER_AL_CALCULATOR, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_AVCaptureSlashPlayback CONSUMER_KEY(HID_CONSUMER_AL_A_SLASH_V_CAPTURE_SLASH_PLAYBACK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Local_MachineBrowser CONSUMER_KEY(HID_CONSUMER_AL_LOCAL_MACHINE_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Lan_SlashWanBrowser CONSUMER_KEY(HID_CONSUMER_AL_LAN_SLASH_WAN_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_InternetBrowser CONSUMER_KEY(HID_CONSUMER_AL_INTERNET_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_RemoteNetworkingSlashIspConnect CONSUMER_KEY(HID_CONSUMER_AL_REMOTE_NETWORKING_SLASH_ISP_CONNECT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_NetworkConference CONSUMER_KEY(HID_CONSUMER_AL_NETWORK_CONFERENCE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_NetworkChat CONSUMER_KEY(HID_CONSUMER_AL_NETWORK_CHAT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_TelephonySlashDialer CONSUMER_KEY(HID_CONSUMER_AL_TELEPHONY_SLASH_DIALER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Logon CONSUMER_KEY(HID_CONSUMER_AL_LOGON, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Logoff CONSUMER_KEY(HID_CONSUMER_AL_LOGOFF, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_LogonSlashLogoff CONSUMER_KEY(HID_CONSUMER_AL_LOGON_SLASH_LOGOFF, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_TerminalLockSlashScreensaver CONSUMER_KEY(HID_CONSUMER_AL_TERMINAL_LOCK_SLASH_SCREENSAVER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_ControlPanel CONSUMER_KEY(HID_CONSUMER_AL_CONTROL_PANEL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_CommandLineProcessorSlashRun CONSUMER_KEY(HID_CONSUMER_AL_COMMAND_LINE_PROCESSOR_SLASH_RUN, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_ProcessSlashTask_Manager CONSUMER_KEY(HID_CONSUMER_AL_PROCESS_SLASH_TASK_MANAGER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_SelectTaskSlashApplication CONSUMER_KEY(HID_CONSUMER_AL_SELECT_TASK_SLASH_APPLICATION, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_NextTaskSlashApplication CONSUMER_KEY(HID_CONSUMER_AL_NEXT_TASK_SLASH_APPLICATION, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_PreviousTaskSlashApplication CONSUMER_KEY(HID_CONSUMER_AL_PREVIOUS_TASK_SLASH_APPLICATION, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_PreemptiveHaltTaskSlashApplication CONSUMER_KEY(HID_CONSUMER_AL_PREEMPTIVE_HALT_TASK_SLASH_APPLICATION, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_IntegratedHelpCenter CONSUMER_KEY(HID_CONSUMER_AL_INTEGRATED_HELP_CENTER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Documents CONSUMER_KEY(HID_CONSUMER_AL_DOCUMENTS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Thesaurus CONSUMER_KEY(HID_CONSUMER_AL_THESAURUS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Dictionary CONSUMER_KEY(HID_CONSUMER_AL_DICTIONARY, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Desktop CONSUMER_KEY(HID_CONSUMER_AL_DESKTOP, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_SpellCheck CONSUMER_KEY(HID_CONSUMER_AL_SPELL_CHECK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_GrammarCheck CONSUMER_KEY(HID_CONSUMER_AL_GRAMMAR_CHECK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_WirelessStatus CONSUMER_KEY(HID_CONSUMER_AL_WIRELESS_STATUS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_KeyboardLayout CONSUMER_KEY(HID_CONSUMER_AL_KEYBOARD_LAYOUT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_VirusProtection CONSUMER_KEY(HID_CONSUMER_AL_VIRUS_PROTECTION, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Encryption CONSUMER_KEY(HID_CONSUMER_AL_ENCRYPTION, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_ScreenSaver CONSUMER_KEY(HID_CONSUMER_AL_SCREEN_SAVER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Alarms CONSUMER_KEY(HID_CONSUMER_AL_ALARMS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Clock CONSUMER_KEY(HID_CONSUMER_AL_CLOCK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_FileBrowser CONSUMER_KEY(HID_CONSUMER_AL_FILE_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_PowerStatus CONSUMER_KEY(HID_CONSUMER_AL_POWER_STATUS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_ImageBrowser CONSUMER_KEY(HID_CONSUMER_AL_IMAGE_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_AudioBrowser CONSUMER_KEY(HID_CONSUMER_AL_AUDIO_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_MovieBrowser CONSUMER_KEY(HID_CONSUMER_AL_MOVIE_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_DigitalRightsManager CONSUMER_KEY(HID_CONSUMER_AL_DIGITAL_RIGHTS_MANAGER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_DigitalWallet CONSUMER_KEY(HID_CONSUMER_AL_DIGITAL_WALLET, KEY_FLAGS |  HID_TYPE_SEL)

#define Consumer_AL_InstantMessaging CONSUMER_KEY(HID_CONSUMER_AL_INSTANT_MESSAGING, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_OemFeaturesSlashTipsSlashTUTORIALBrowser CONSUMER_KEY(HID_CONSUMER_AL_OEM_FEATURES_SLASH__TIPS_SLASH_TUTORIAL_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_OemHelp CONSUMER_KEY(HID_CONSUMER_AL_OEM_HELP, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_OnlineCommunity CONSUMER_KEY(HID_CONSUMER_AL_ONLINE_COMMUNITY, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_Entertainment_Content_Browser CONSUMER_KEY(HID_CONSUMER_AL_ENTERTAINMENT_CONTENT_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_OnlineShoppingBrowser CONSUMER_KEY(HID_CONSUMER_AL_ONLINE_SHOPPING_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_SmartcardInformationSlashHelp CONSUMER_KEY(HID_CONSUMER_AL_SMARTCARD_INFORMATION_SLASH_HELP, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_MarketMonitorSlashFinanceBrowser CONSUMER_KEY(HID_CONSUMER_AL_MARKET_MONITOR_SLASH_FINANCE_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_CustomizedCorporateNewsBrowser CONSUMER_KEY(HID_CONSUMER_AL_CUSTOMIZED_CORPORATE_NEWS_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_OnlineActivityBrowser CONSUMER_KEY(HID_CONSUMER_AL_ONLINE_ACTIVITY_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_ResearchSlashSearchBrowser CONSUMER_KEY(HID_CONSUMER_AL_RESEARCH_SLASH_SEARCH_BROWSER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AL_AudioPlayer CONSUMER_KEY(HID_CONSUMER_AL_AUDIO_PLAYER, KEY_FLAGS |  HID_TYPE_SEL)

#define Consumer_GenericGuiApplicationControls CONSUMER_KEY(HID_CONSUMER_GENERIC_GUI_APPLICATION_CONTROLS, KEY_FLAGS | HID_TYPE_NARY)
#define Consumer_AC_New CONSUMER_KEY(HID_CONSUMER_AC_NEW, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Open CONSUMER_KEY(HID_CONSUMER_AC_OPEN, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Close CONSUMER_KEY(HID_CONSUMER_AC_CLOSE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Exit CONSUMER_KEY(HID_CONSUMER_AC_EXIT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Maximize CONSUMER_KEY(HID_CONSUMER_AC_MAXIMIZE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Minimize CONSUMER_KEY(HID_CONSUMER_AC_MINIMIZE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Save CONSUMER_KEY(HID_CONSUMER_AC_SAVE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Print CONSUMER_KEY(HID_CONSUMER_AC_PRINT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Properties CONSUMER_KEY(HID_CONSUMER_AC_PROPERTIES, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Undo CONSUMER_KEY(HID_CONSUMER_AC_UNDO, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Copy CONSUMER_KEY(HID_CONSUMER_AC_COPY, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Cut CONSUMER_KEY(HID_CONSUMER_AC_CUT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Paste CONSUMER_KEY(HID_CONSUMER_AC_PASTE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectAll CONSUMER_KEY(HID_CONSUMER_AC_SELECT_ALL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Find CONSUMER_KEY(HID_CONSUMER_AC_FIND, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_FindAndReplace CONSUMER_KEY(HID_CONSUMER_AC_FIND_AND_REPLACE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Search CONSUMER_KEY(HID_CONSUMER_AC_SEARCH, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_GoTo CONSUMER_KEY(HID_CONSUMER_AC_GO_TO, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Home CONSUMER_KEY(HID_CONSUMER_AC_HOME, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Back CONSUMER_KEY(HID_CONSUMER_AC_BACK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Forward CONSUMER_KEY(HID_CONSUMER_AC_FORWARD, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Stop CONSUMER_KEY(HID_CONSUMER_AC_STOP, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Refresh CONSUMER_KEY(HID_CONSUMER_AC_REFRESH, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_PreviousLink CONSUMER_KEY(HID_CONSUMER_AC_PREVIOUS_LINK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_NextLink CONSUMER_KEY(HID_CONSUMER_AC_NEXT_LINK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Bookmarks CONSUMER_KEY(HID_CONSUMER_AC_BOOKMARKS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_History CONSUMER_KEY(HID_CONSUMER_AC_HISTORY, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Subscriptions CONSUMER_KEY(HID_CONSUMER_AC_SUBSCRIPTIONS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ZoomIn CONSUMER_KEY(HID_CONSUMER_AC_ZOOM_IN, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ZoomOut CONSUMER_KEY(HID_CONSUMER_AC_ZOOM_OUT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Zoom CONSUMER_KEY(HID_CONSUMER_AC_ZOOM, KEY_FLAGS |  HID_TYPE_LC)
#define Consumer_AC_FullSCreenView CONSUMER_KEY(HID_CONSUMER_AC_FULL_SCREEN_VIEW, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_NormalView CONSUMER_KEY(HID_CONSUMER_AC_NORMAL_VIEW, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ViewToggle CONSUMER_KEY(HID_CONSUMER_AC_VIEW_TOGGLE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ScrollUp CONSUMER_KEY(HID_CONSUMER_AC_SCROLL_UP, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ScrollDown CONSUMER_KEY(HID_CONSUMER_AC_SCROLL_DOWN, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Scroll CONSUMER_KEY(HID_CONSUMER_AC_SCROLL, KEY_FLAGS |  HID_TYPE_LC)
#define Consumer_AC_PanLeft CONSUMER_KEY(HID_CONSUMER_AC_PAN_LEFT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_PanRight CONSUMER_KEY(HID_CONSUMER_AC_PAN_RIGHT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Pan CONSUMER_KEY(HID_CONSUMER_AC_PAN, KEY_FLAGS |  HID_TYPE_LC)
#define Consumer_AC_NewWindow CONSUMER_KEY(HID_CONSUMER_AC_NEW_WINDOW, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_TileHorizontally CONSUMER_KEY(HID_CONSUMER_AC_TILE_HORIZONTALLY, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_TileVertically CONSUMER_KEY(HID_CONSUMER_AC_TILE_VERTICALLY, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Format CONSUMER_KEY(HID_CONSUMER_AC_FORMAT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Edit CONSUMER_KEY(HID_CONSUMER_AC_EDIT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Bold CONSUMER_KEY(HID_CONSUMER_AC_BOLD, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Italics CONSUMER_KEY(HID_CONSUMER_AC_ITALICS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Underline CONSUMER_KEY(HID_CONSUMER_AC_UNDERLINE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Strikethrough CONSUMER_KEY(HID_CONSUMER_AC_STRIKETHROUGH, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Subscript CONSUMER_KEY(HID_CONSUMER_AC_SUBSCRIPT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Superscript CONSUMER_KEY(HID_CONSUMER_AC_SUPERSCRIPT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_AllCaps CONSUMER_KEY(HID_CONSUMER_AC_ALL_CAPS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Rotate CONSUMER_KEY(HID_CONSUMER_AC_ROTATE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Resize CONSUMER_KEY(HID_CONSUMER_AC_RESIZE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_FlipHorizontal CONSUMER_KEY(HID_CONSUMER_AC_FLIP_HORIZONTAL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_FlipVertical CONSUMER_KEY(HID_CONSUMER_AC_FLIP_VERTICAL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_MirrorHorizontal CONSUMER_KEY(HID_CONSUMER_AC_MIRROR_HORIZONTAL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_MirrorVertical CONSUMER_KEY(HID_CONSUMER_AC_MIRROR_VERTICAL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_FontSelect CONSUMER_KEY(HID_CONSUMER_AC_FONT_SELECT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_FontColor CONSUMER_KEY(HID_CONSUMER_AC_FONT_COLOR, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_FontSize CONSUMER_KEY(HID_CONSUMER_AC_FONT_SIZE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_JustifyLeft CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_LEFT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_JustifyCenterH CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_CENTER_H, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_JustifyRight CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_RIGHT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_JustifyBlockH CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_BLOCK_H, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_JustifyTop CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_TOP, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_JustifyCenterV CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_CENTER_V, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_JustifyBottom CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_BOTTOM, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_JustifyBlockV CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_BLOCK_V, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_IndentDecrease CONSUMER_KEY(HID_CONSUMER_AC_INDENT_DECREASE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_IndentIncrease CONSUMER_KEY(HID_CONSUMER_AC_INDENT_INCREASE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_NumberedList CONSUMER_KEY(HID_CONSUMER_AC_NUMBERED_LIST, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_RestartNumbering CONSUMER_KEY(HID_CONSUMER_AC_RESTART_NUMBERING, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_BulletedList CONSUMER_KEY(HID_CONSUMER_AC_BULLETED_LIST, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Promote CONSUMER_KEY(HID_CONSUMER_AC_PROMOTE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Demote CONSUMER_KEY(HID_CONSUMER_AC_DEMOTE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Yes CONSUMER_KEY(HID_CONSUMER_AC_YES, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_No CONSUMER_KEY(HID_CONSUMER_AC_NO, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Cancel CONSUMER_KEY(HID_CONSUMER_AC_CANCEL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Catalog CONSUMER_KEY(HID_CONSUMER_AC_CATALOG, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_BuySlashCheckout CONSUMER_KEY(HID_CONSUMER_AC_BUY_SLASH_CHECKOUT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_AddToCart CONSUMER_KEY(HID_CONSUMER_AC_ADD_TO_CART, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Expand CONSUMER_KEY(HID_CONSUMER_AC_EXPAND, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ExpandAll CONSUMER_KEY(HID_CONSUMER_AC_EXPAND_ALL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Collapse CONSUMER_KEY(HID_CONSUMER_AC_COLLAPSE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_CollapseAll CONSUMER_KEY(HID_CONSUMER_AC_COLLAPSE_ALL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_PrintPreview CONSUMER_KEY(HID_CONSUMER_AC_PRINT_PREVIEW, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_PasteSpecial CONSUMER_KEY(HID_CONSUMER_AC_PASTE_SPECIAL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_InsertMode CONSUMER_KEY(HID_CONSUMER_AC_INSERT_MODE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Delete CONSUMER_KEY(HID_CONSUMER_AC_DELETE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Lock CONSUMER_KEY(HID_CONSUMER_AC_LOCK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Unlock CONSUMER_KEY(HID_CONSUMER_AC_UNLOCK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Protect CONSUMER_KEY(HID_CONSUMER_AC_PROTECT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Unprotect CONSUMER_KEY(HID_CONSUMER_AC_UNPROTECT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_AttachComment CONSUMER_KEY(HID_CONSUMER_AC_ATTACH_COMMENT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_DeleteComment CONSUMER_KEY(HID_CONSUMER_AC_DELETE_COMMENT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ViewComment CONSUMER_KEY(HID_CONSUMER_AC_VIEW_COMMENT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectWord CONSUMER_KEY(HID_CONSUMER_AC_SELECT_WORD, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectSentence CONSUMER_KEY(HID_CONSUMER_AC_SELECT_SENTENCE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectParagraph CONSUMER_KEY(HID_CONSUMER_AC_SELECT_PARAGRAPH, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectColumn CONSUMER_KEY(HID_CONSUMER_AC_SELECT_COLUMN, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectRow CONSUMER_KEY(HID_CONSUMER_AC_SELECT_ROW, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectTable CONSUMER_KEY(HID_CONSUMER_AC_SELECT_TABLE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectObject CONSUMER_KEY(HID_CONSUMER_AC_SELECT_OBJECT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_RedoSlashRepeat CONSUMER_KEY(HID_CONSUMER_AC_REDO_SLASH_REPEAT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Sort CONSUMER_KEY(HID_CONSUMER_AC_SORT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Sort_Ascending CONSUMER_KEY(HID_CONSUMER_AC_SORT_ASCENDING, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Sort_Descending CONSUMER_KEY(HID_CONSUMER_AC_SORT_DESCENDING, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Filter CONSUMER_KEY(HID_CONSUMER_AC_FILTER, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SetClock CONSUMER_KEY(HID_CONSUMER_AC_SET_CLOCK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ViewClock CONSUMER_KEY(HID_CONSUMER_AC_VIEW_CLOCK, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SelectTimeZone CONSUMER_KEY(HID_CONSUMER_AC_SELECT_TIME_ZONE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_EditTimeZones CONSUMER_KEY(HID_CONSUMER_AC_EDIT_TIME_ZONES, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SetAlarm CONSUMER_KEY(HID_CONSUMER_AC_SET_ALARM, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ClearAlarm CONSUMER_KEY(HID_CONSUMER_AC_CLEAR_ALARM, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SnoozeAlarm CONSUMER_KEY(HID_CONSUMER_AC_SNOOZE_ALARM, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ResetAlarm CONSUMER_KEY(HID_CONSUMER_AC_RESET_ALARM, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Synchronize CONSUMER_KEY(HID_CONSUMER_AC_SYNCHRONIZE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SendSlashReceive CONSUMER_KEY(HID_CONSUMER_AC_SEND_SLASH_RECEIVE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SendTo CONSUMER_KEY(HID_CONSUMER_AC_SEND_TO, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Reply CONSUMER_KEY(HID_CONSUMER_AC_REPLY, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ReplyAll CONSUMER_KEY(HID_CONSUMER_AC_REPLY_ALL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_ForwardMsg CONSUMER_KEY(HID_CONSUMER_AC_FORWARD_MSG, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Send CONSUMER_KEY(HID_CONSUMER_AC_SEND, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_AttachFile CONSUMER_KEY(HID_CONSUMER_AC_ATTACH_FILE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Upload CONSUMER_KEY(HID_CONSUMER_AC_UPLOAD, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Download CONSUMER_KEY(HID_CONSUMER_AC_DOWNLOAD, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SetBorders CONSUMER_KEY(HID_CONSUMER_AC_SET_BORDERS, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_InsertRow CONSUMER_KEY(HID_CONSUMER_AC_INSERT_ROW, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_InsertColumn CONSUMER_KEY(HID_CONSUMER_AC_INSERT_COLUMN, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_InsertFile CONSUMER_KEY(HID_CONSUMER_AC_INSERT_FILE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_InsertPicture CONSUMER_KEY(HID_CONSUMER_AC_INSERT_PICTURE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_InsertObject CONSUMER_KEY(HID_CONSUMER_AC_INSERT_OBJECT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_InsertSymbol CONSUMER_KEY(HID_CONSUMER_AC_INSERT_SYMBOL, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_SaveandClose CONSUMER_KEY(HID_CONSUMER_AC_SAVE_AND_CLOSE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Rename CONSUMER_KEY(HID_CONSUMER_AC_RENAME, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Merge CONSUMER_KEY(HID_CONSUMER_AC_MERGE, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Split CONSUMER_KEY(HID_CONSUMER_AC_SPLIT, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Distribute_Horizontally CONSUMER_KEY(HID_CONSUMER_AC_DISTRIBUTE_HORIZONTALLY, KEY_FLAGS |  HID_TYPE_SEL)
#define Consumer_AC_Distribute_Vertically CONSUMER_KEY(HID_CONSUMER_AC_DISTRIBUTE_VERTICALLY, KEY_FLAGS |  HID_TYPE_SEL)
