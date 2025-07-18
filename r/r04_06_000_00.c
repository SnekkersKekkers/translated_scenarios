ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,34,0,0,0,#1,#1,0,0);
    VoicePlay("R040600000_06_000");
    MsgDisp("Himuro","Hey.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("R040600000_06_010");
    MsgDisp("Himuro","Everyone's having a good time, huh.
You too?");
    MsgDisp("主人公","Hehe.
I guess.
Aren't you not, ｛氷室＊＊｝?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R040600000_06_020");
    MsgDisp("Himuro","Well, somewhat.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,34,0,0,0,#1,#1,0,0);
    VoicePlay("R040600000_06_030");
    MsgDisp("Himuro","Oh, there you are.");
    MsgDisp("主人公","Ah, you're here too, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R040600000_06_040");
    MsgDisp("Himuro","Well.
It's a school event, so I can't afford to
skip it.");
    MsgDisp("主人公","Hehe, you're so disciplined.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("R040600000_06_050");
    MsgDisp("Himuro","I'll follow the rules of society.
...I'm not used to this kind of event.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,34,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(6);
    VoicePlay("R040600000_06_060");
    MsgDisp("Himuro","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Merry Christmas!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChCheek(6,5);
    VoicePlay("R040600000_06_070");
    MsgDisp("Himuro","Oh, yeah...
Merry Christmas.
You seem to be having fun.");
    MsgDisp("主人公","Hehe, yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
