BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(It's now time for the real
performance...... I have to make sure I
don't forget my lines.)");
    VoicePlay("P230400000_04_000");
    MsgDisp("Nanatsumori?","What are we going to do if you're scared
even before the performance begins?");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    ChNanaType(1);
    ChOpen(4,38,0,2,3,#1,#1,0,0,0,60);
    MsgDisp("主人公","｛七ツ森＊｝...
Eh-∋");
    MsgDisp("主人公","｛七ツ森＊｝, haven't you
even done your beast makeup yet?
The show is about to start!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P230400000_04_010");
    MsgDisp("Nanatsumori","It'll be alright.
Makeup can be done in an instant.");
    MsgDisp("主人公","That might be true, though...");
    MsgDisp("主人公","(Even so, Nana wearing the
lord-of-the-castle costume looks really
cool...)");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P230400000_04_020");
    MsgDisp("Nanatsumori","Hey hey.
Save your admiration for this look for the
last scene, okay?");
    VoicePlay("P230400000_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("P230400000_04_030");
    MsgDisp("Nanatsumori","Well, it starts with the dreaming heroine.
I'll meet you later, on the stage!");
    MsgDisp("主人公","Yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
