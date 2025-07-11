ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200050_32_000");
MsgDisp("V.P. Himuro","Well then, that is all for
today's lesson.");
MsgSel("Yes, sir!","Please teach me for a little longer!");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
