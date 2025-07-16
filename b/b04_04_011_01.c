BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040401101_04_000");
MsgDisp("Nanatsumori","If it were evening, the scenery would be
completely different to now.");
MsgSel("I want to take a picture of the sky at sunset.","I want to see it too","There would probably be more couples...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040401101_04_010");
    MsgDisp("Nanatsumori","It's nice, right?
The subject is too wide though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040401101_04_020");
    MsgDisp("Nanatsumori","Right?
Should we... come together some day?
If it's convenient.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040401101_04_030");
    MsgDisp("Nanatsumori","So?
You don't have to say it with that face.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
