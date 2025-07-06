BGOpen("fp430",0);
BGMPlay("BGM_PLACE_MUSEUM_MIHARA",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040210300_02_000");
MsgDisp("Sassa","When I think of him as our 
senior at Haba High, 
I feel some sort of kinship?");
MsgSel("We only have wonderful seniors, huh","He used the same classrooms as us, huh?","It's like it's already his own exhibition.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040210300_02_010");
    MsgDisp("Sassa","We can't afford to lose to him!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040210300_02_020");
    MsgDisp("Sassa","They painted those pictures in the art
room right? When I compare it to my own
drawings, it's beyond pathetic I could
laugh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040210300_02_030");
    MsgDisp("Sassa","I feel a strong sense of affinity. Let's
sneak one of your artworks in here too. No
one would notice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
