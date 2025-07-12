ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200012_32_000");
MsgDisp("VP Himuro","Skinskip is divided into five areas.
Head, eyes, mouth, body, and arms.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200012_32_010");
MsgDisp("VP Himuro","Your feelings will be conveyed
differently depending on the area.
What I mean by this, I'm sure you know.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200012_32_020");
MsgDisp("VP Himuro","These are the basics of the basics.
Do you understand thus far?");
MsgSel("Yes, sir!","Please explain again!");
switch (MsgSelRsltGet()){
    case 0:
    break ;
    case 1:
    break ;
    default :
    DbgAssert(0);
    break ;
    }
