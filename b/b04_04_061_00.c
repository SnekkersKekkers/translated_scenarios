BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040406100_04_000");
MsgDisp("Nanatsumori","Ahー... it's hot.
So, what do you plan on doing here?");
MsgSel("Shall we race out to the sea?","Let's eat at the beach hut first!","Let's look for pretty seashells");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(4,2);
    VoicePlay("B040406100_04_010");
    MsgDisp("Nanatsumori","I won't be doing that.
You can do it yourself.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040406100_04_020");
    MsgDisp("Nanatsumori","Got it.
Let's go eat some unique yakisoba!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040406100_04_030");
    MsgDisp("Nanatsumori","Well, that's fine.
Was there a need to change into our swim
suits then?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
