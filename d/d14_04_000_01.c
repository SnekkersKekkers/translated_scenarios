MsgDisp("主人公","Ah, what's up with everyone?");
ChMotion(4,1,1);
VoicePlay("D140400000_04_010");
MsgDisp("Nanatsumori","We're going to the school cafeteria
for lunch.
Do you wanna come with us?");
MsgSel("Yeah, let's go!","Sorry, I want to be alone today.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
