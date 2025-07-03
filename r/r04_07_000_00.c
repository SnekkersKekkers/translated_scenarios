ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(7,34,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("R040700000_07_000");
    MsgDisp("Mikage","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Merry Christmas!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("R040700000_07_010");
    MsgDisp("Mikage","Ah, you beat me to the punch.
Merry Christmas!
Make sure to have loads of fun.");
    MsgDisp("主人公","Yeah!");
    break ;
    case 3:
    MsgClose();
    ChOpen(7,34,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("R040700000_07_020");
    MsgDisp("Mikage","｛主人公｝,
Merry Christmas.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Merry Christmas!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("R040700000_07_030");
    MsgDisp("Mikage","Habataki High's Christmas Party is
nice, huh? It's hard to find
anything as authentic as this.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("R040700000_07_040");
    MsgDisp("Mikage","The food looks amazing too.");
    MsgDisp("主人公","Hehe, it does.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(7,34,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("R040700000_07_050");
    MsgDisp("Mikage","｛主人公｝.
Merry Christmas.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Merry Christmas!");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,4);
    VoicePlay("R040700000_07_060");
    MsgDisp("Mikage","You made it.
When you entered, the venue
suddenly got brighter.");
    MsgDisp("主人公","Huh, am I really that flashy?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("R040700000_07_070");
    MsgDisp("Mikage","Not flashy in that way.
It just means you look more 
beautiful than usual.");
    MsgDisp("主人公","Hehe, thank you very much.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
