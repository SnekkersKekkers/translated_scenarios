MsgDisp("主人公","Eh, what's everyone up to?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D140300000_03_010");
MsgDisp("Honda","Hey, hey!
We're going to the school cafeteria for
lunch, won't you come too?");
MsgSel("Yeah, I'll go!","Sorry, I feel like being alone today.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
