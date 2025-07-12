BGOpen("fp420",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01)ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040110200_01_000");
MsgDisp("Kazama","Old tools can really
convey the feelings of their owner.");
MsgSel("Does a motorcycle count as a tool?","It was really cherished","Can a hundred year old motorcycle still work?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040110200_01_010");
    MsgDisp("Kazama","If it's made by humans, it's a tool. Well
made tools are ones that have the feelings
of both the user and the creator.");
    ChEye(1,0);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040110200_01_020");
    MsgDisp("Kazama","You're right. It's not just for
decoration, it's also been taken care of
so it can be driven on public roads.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040110200_01_030");
    MsgDisp("Kazama","Of course it can.
In terms of what's vintage,
100 years isn't even that old.");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
