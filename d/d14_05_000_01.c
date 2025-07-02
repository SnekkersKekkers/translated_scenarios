MsgDisp("主人公","Ah, you guys, what's up?");
VoicePlay("D140500000_05_010");
MsgDisp("Hiiragi","We're going to the cafeteria now. Would
you like to join us?");
MsgSel("Sure, let's go！","Sorry, I want to be alone
today.");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
