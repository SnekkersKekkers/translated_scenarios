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
    VoicePlay("H1A0700000_07_000");
    MsgDisp("Mikage","｛主人公｝, congrats.");
    MsgDisp("主人公","｛御影＊＊｝! Thank you!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("H1A0700000_07_010");
    MsgDisp("Mikage","Aren't the fruits of your labor at
managing the baseball club great, manager?");
    MsgDisp("主人公","I was just helping out.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("H1A0700000_07_020");
    MsgDisp("Mikage","That kindness definitely helped the team
get the win.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("H1A0700000_07_030");
    MsgDisp("Mikage","They're getting mad that I'm keeping
\"everyone's manager\" to myself.
Go on and show 'em your smile.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(We did it!
We won the Koushien!
I'm so glad I worked hard at this club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
