MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B040723600_07_000");
MsgDisp("Mikage","Heeh, it's completely different from
daytime.
So this is the night parade～");
MsgSel("It's very popular.","Can you see it properly?","Let's dance together!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040723600_07_010");
    MsgDisp("Mikage","It doesn't matter if you're a kid or an
adult!
You'll still get excited.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040723600_07_020");
    MsgDisp("Mikage","I can see it.
Worry about yourself.
Look, there's an empty spot over there.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040723600_07_030");
    MsgDisp("Mikage","Hey, we can't get in
the way, okay?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
