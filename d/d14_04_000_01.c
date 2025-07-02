MsgDisp("主人公","Ah, what's up with everyone?");
ChMotion(4,1,1);
VoicePlay("D140400000_04_010");
MsgDisp("Nanatsumori","We're going to the school 
cafeteria for lunch. Do you wanna 
come with us?");
MsgSel("Yeah, I'll go!","Sorry, I'd like to be by myself for today.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
