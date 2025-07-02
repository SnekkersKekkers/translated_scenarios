BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,0,0,-1,-1,0,0);
    VoicePlay("K010800100_08_000");
    MsgDisp("Shirahane","Huh?
What's the matter?");
    MsgDisp("主人公","Today's your birthday, right?");
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,3,1);
    VoicePlay("K010800100_08_010");
    MsgDisp("Shirahane","Huh, you remembered, did ya?");
    MsgDisp("主人公","Here, your present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("K010800100_08_020");
    MsgDisp("Shirahane","'s it really alright?
I'm so happy, can I open it?");
    MsgDisp("主人公","Of course!");
    break ;
    case 3:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(8);
    VoicePlay("K010800100_08_030");
    MsgDisp("Shirahane","｛主人公｝.
What's the matter?");
    MsgDisp("主人公","It's your birthday today,
right, ｛大地＊＊｝?");
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("K010800100_08_040");
    MsgDisp("Shirahane","You remembered!
'ppreciate it.");
    MsgDisp("主人公","Hehe.
Here, your present!");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("K010800100_08_050");
    MsgDisp("Shirahane","Really?
Can I open 'er up right here?");
    MsgDisp("主人公","Of course!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛大地＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    ChOpen(8,35,3,0,5,-1,-1,4,0);
    VoicePlay("K010800100_08_060");
    MsgDisp("Shirahane","......!
W, what's the matter?");
    MsgDisp("主人公","Today is your birthday,
right, ｛大地＊＊｝?
I brought you a present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(8,3);
    ChMouth(8,4);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,10);
    ChCheek(8,8);
    VoicePlay("K010800100_08_070");
    MsgDisp("Shirahane","Ah, oh no......");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("K010800100_08_080");
    MsgDisp("Shirahane","I'm super stoked.
Could I open it right now?");
    MsgDisp("主人公","Of course!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,2,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("K010800100_08_090");
    MsgDisp("Shirahane","Heheh!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
