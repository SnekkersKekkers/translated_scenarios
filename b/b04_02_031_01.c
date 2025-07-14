BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040203101_02_000");
MsgDisp("Sassa","For us land creatures, this place is like
a completely different world.");
MsgSel("Is that fish the boss?","Sardine Tornado!","It looks like it's food time");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040203101_02_010");
    MsgDisp("Sassa","It's definitely the boss.
That big body is good for catching food.
I have a big body too so I'm sure.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,5);
    VoicePlay("B040203101_02_020");
    MsgDisp("Sassa","Mackerel Thunder!
What else can we say?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040203101_02_030");
    MsgDisp("Sassa","I found some information about it over
there. It seems that the amount and
frequency of the feeding is
well-controlled.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
