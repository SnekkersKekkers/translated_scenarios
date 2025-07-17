BGOpen("sc620",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(7);
    VoicePlay("H1A0700001_07_000");
    MsgDisp("Mikage","｛主人公｝, that was a
good match, huh?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝...
We lost...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    ChEyeOpenLevel(7,8);
    VoicePlay("H1A0700001_07_010");
    MsgDisp("Mikage","It's okay to cry.
You did the best you could for everyone.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    ChEyeOpenLevel(7,10);
    VoicePlay("H1A0700001_07_020");
    MsgDisp("Mikage","...But you know, I feel a little
jealous.");
    MsgDisp("主人公","Huh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("H1A0700001_07_030");
    MsgDisp("Mikage","It means you've made friends, all aiming
for the same goal.
The Haba High baseball club is nice, huh.");
    MsgDisp("主人公","Yes...");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("H1A0700001_07_040");
    MsgDisp("Mikage","Now, it's time for your last job as
manager.
Go be with everyone.");
    MsgDisp("主人公","(｛御影＊＊｝, thank you.
We lost, but this will become a cherished
memory...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
