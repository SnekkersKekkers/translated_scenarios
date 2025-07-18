BGOpen("fp450",0);
BGMPlay("BGM_PLACE_MUSEUM_ART",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040110500_01_000");
MsgDisp("Kazama","Are you interested in the modern art
exhibit?");
MsgSel("It's hard to understand, but interesting, right?","Yeah, there's a lot of fascinating works.","Not really.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040110500_01_010");
    MsgDisp("Kazama","Exactly.
Well, that's the way it goes then.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040110500_01_020");
    MsgDisp("Kazama","No kidding.
I don't think there's anything harder to
get than the modern art exhibit.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,4);
    VoicePlay("B040110500_01_030");
    MsgDisp("Kazama","Right? I think the work is interesting,
but I can't help but think about the
future sales value...What a bad habit.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
