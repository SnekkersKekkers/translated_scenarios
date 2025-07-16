BGOpen("bh410",0);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
VoicePlay("B040430001_04_000");
MsgDisp("Nanatsumori","...What should we do?");
MsgSel("I want to see your makeup tools and stuff","I'm curious about your equipment...","Let's take a commemorative photograph!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040430001_04_010");
    MsgDisp("Nanatsumori","That is something girls would be curious
about, after all. Okay. If you'd like, I
can do your makeup too?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040430001_04_020");
    MsgDisp("Nanatsumori","You can touch them, but don't drop them.
They're delicate.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040430001_04_030");
    MsgDisp("Nanatsumori","Sure.
What are we commemorating?
Oh, but don't post this on social media.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
}