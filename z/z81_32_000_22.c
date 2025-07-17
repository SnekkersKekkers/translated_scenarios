ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200022_32_000");
MsgDisp("VP Himuro","First is a \"touch\".
Lightly touch the other person, and
immediately release for a quick glance.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200022_32_010");
MsgDisp("VP Himuro","Next is a \"slide\". Touch and slide.
Tickling, snuggling... Things that will
make them pay attention to you.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200022_32_020");
MsgDisp("VP Himuro","Finally, we have the \"long touch\". Touch
and hold on one area. This means staring
or some other drastic action.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200022_32_030");
MsgDisp("VP Himuro","Remember these three actions well.
Where you touch them, and how.
That culminates into skinskip.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("Z813200022_32_040");
MsgDisp("VP Himuro","That is all.
Do you understand?");
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
