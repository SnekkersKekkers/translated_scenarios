BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B040306102_03_000");
MsgDisp("Honda","Looks like there's loads of people
sunbathing on the beach instead of
swimming.");
MsgSel("No one's really seriously swimming.","Hanegasaki beach's sand is very fine-grained.","Should we sunbathe too?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040306102_03_010");
    MsgDisp("Honda","Is that so? So there's an option not to
swim. The bar for going to the beach might
have been lowered.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040306102_03_020");
    MsgDisp("Honda","Yeah, it's because the management
association takes good care of it.
It's the result of their effort.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(3,2);
        ChMouth(3,2);
        ChMotion(3,2);
        VoicePlay("B040306102_03_030");
        MsgDisp("Honda","Sunbathing is nice, but do we have to do
it here?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040306102_03_040");
        MsgDisp("Honda","So, are we going to lie down on the beach
together?");
        MsgDisp("主人公","Well, I guess so.");
        ChEye(3,0);
        ChMotion(3,4);
        VoicePlay("B040306102_03_050");
        MsgDisp("Honda","If that's so, I feel like there are better
places for that.
Like a grassy field.");
        MsgDisp("主人公","But it's fun to be on the beach in
swimsuits, no?");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040306102_03_060");
        MsgDisp("Honda","Is the swimsuit part that important?");
        MsgDisp("主人公","Uh, yeah.");
        ChLayout(2);
        Wait(20);
        ChLayout(0);
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040306102_03_070");
        MsgDisp("Honda","...Okay, okay.");
        ChLayout(1);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040306102_03_080");
        MsgDisp("Honda","Hmm, I see.");
        MsgDisp("主人公","I'm kind of embarrassed.
What is it?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040306102_03_090");
        MsgDisp("Honda","Ah, I get it!");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040306102_03_100");
        MsgDisp("Honda","You look gorgeous in your swimsuit, and
20% more radiant than usual!");
        MsgDisp("主人公","(...20%?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
