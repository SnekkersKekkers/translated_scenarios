ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoiceEVSPlay(6);
VoicePlay("B180600000_06_000");
MsgDisp("Himuro","｛主人公｝.");
MsgDisp("主人公","What?
...Wait, eh——");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B180600000_06_010");
MsgDisp("Himuro","I was thinking of calling you that from
now on. Calling you by your last name is
too formal.");
MsgSel("Yeah, that's fine.","Mm~, that's a little...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B180600000_06_020");
    MsgDisp("Himuro","Thanks.
...Well, it's not really a matter of
asking permission.");
    MsgDisp("主人公","(I feel kind of flustered...)");
    break ;
    case 1:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B180600000_06_030");
    MsgDisp("Himuro","Ah, right.
Then, I'll call you the same as before.");
    MsgDisp("主人公","(I wonder if I messed up...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
