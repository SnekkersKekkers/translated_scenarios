switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("X110700001_07_000");
    MsgDisp("Mikage","Thanks for the track and field 
competition the other day! Thanks 
to you, everyone had set a new 
personal best.");
    MsgDisp("主人公","That... was thanks to their own efforts.");
    MsgDisp("主人公","(But I would be happy if I was of help
even if it was just a little!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,254,3,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("X110700001_07_010");
    MsgDisp("Mikage","Everyone at the track and field
club is grateful to you.");
    MsgDisp("主人公","Eh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("X110700001_07_020");
    MsgDisp("Mikage","At the last track meet.
There were a lot of athletes who
had set new personal bests.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("X110700001_07_030");
    MsgDisp("Mikage","Everyone said it was thanks to
your support. Thank you.");
    MsgDisp("主人公","(I would be happy if I was
of help to everyone.
｛御影＊＊｝, thank you very much!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
