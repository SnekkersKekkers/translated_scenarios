ChLayout(1);
BGOpen("sc520",0);
ScrFadeIn(0);
ChOpen(32,254,0,2,2,#1,#1,0,0);
VoicePlay("Z813200001_32_000");
MsgDisp("VP Himuro","Ha......
You seem to hold skinship in quite high
regards.");
ChEye(32,0);
ChMouth(32,1);
VoicePlay("Z813200001_32_010");
MsgDisp("VP Himuro","Very well, I shall lend you my help.
Come.");
MsgSel("Yes, sir!","Please explain first!");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
