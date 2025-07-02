BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛風真＊＊｝ is late...)");
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgDisp("主人公","Oh,｛風真＊＊｝!");
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    MsgClose();
    ChOpen(1,253,1,0,1,8,-1,0,0,0,30);
    VoicePlay("B010100001_01_000");
    MsgDisp("Kazama","Ah, I found you...");
    MsgDisp("主人公","Huh?");
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    Wait(12,0);
    ChMouth(1,3);
    ChEyeOpenLevel(1,-1);
    VoicePlay("B010100001_01_010");
    MsgDisp("Kazama","I was just about to pretend I showed up
first...");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Hey!");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDisp("主人公","Oh,｛風真＊＊｝!");
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    MsgClose();
    ChOpen(1,253,3,2,1,-1,-1,0,0,0,30);
    VoicePlay("B010100001_01_020");
    MsgDisp("Kazama","Sorry, I'm late!");
    MsgDisp("主人公","It's okay, I only just got here too.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B010100001_01_030");
    MsgDisp("Kazama","I see, thank you. But next time I don't
want to keep you waiting.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Oh,｛風真＊＊｝!");
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    MsgClose();
    ChOpen(1,253,3,2,1,-1,-1,0,0,0,30);
    VoicePlay("B010100001_01_040");
    MsgDisp("Kazama","My bad!
Are you alright?");
    MsgDisp("主人公","Yeah, no problems here.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B010100001_01_050");
    MsgDisp("Kazama","Ah, good...
— Ugh, what's my problem?
I spent so long getting ready.");
    MsgDisp("主人公","Really now?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    ChCheek(1,5);
    VoicePlay("B010100001_01_060");
    MsgDisp("Kazama","Well, uh...
I made a promise with you.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,0);
    VoicePlay("B010100001_01_070");
    MsgDisp("Kazama","So let's hurry up.
We have to make up for the lost time.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(1,0);
