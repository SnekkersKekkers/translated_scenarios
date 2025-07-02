BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ChOpen(6,254,0,3,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0600000_06_000");
    MsgDisp("Himuro","You won?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("H1A0600000_06_010");
    MsgDisp("Himuro","Those are results you can't get
overnight. Nice work.");
    MsgDisp("主人公","(I'm glad that I stayed as
the baseball club manager!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0600000_06_020");
    MsgDisp("Himuro","Congrats on winning.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Thank you.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H1A0600000_06_030");
    MsgDisp("Himuro","I respect that about you.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("H1A0600000_06_040");
    MsgDisp("Himuro","Working hard little by little,
and getting good results.");
    MsgDisp("主人公","I'm just the manager, though.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("H1A0600000_06_050");
    MsgDisp("Himuro","What a short-sighted perspective.
It's a fact that your efforts helped
the club.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H1A0600000_06_060");
    MsgDisp("Himuro","Take some more pride in that.
You've worked hard.");
    MsgDisp("主人公","(I'm glad that I stayed as
the baseball club manager!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
