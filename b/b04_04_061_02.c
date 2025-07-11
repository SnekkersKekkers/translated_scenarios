BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040406102_04_000");
MsgDisp("Nanatsumori","So.
What do you want to play first?");
MsgSel("I want to swim.","I want to bury myself in the sand.","Hoe about splashing around in the water?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChMotion(4,0,1);
        VoicePlay("B040406102_04_010");
        MsgDisp("Nanatsumori","I'm staying.
I'll keep watch from here.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        VoicePlay("B040406102_04_020");
        MsgDisp("Nanatsumori","Haa...");
        ChEye(4,1);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,0);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040406102_04_030");
        MsgDisp("Nanatsumori","…………");
        MsgDisp("主人公","Um, if you dislike it, how about 
we do something else?");
        ChEye(4,0);
        ChMouth(4,0);
        VoicePlay("B040406102_04_040");
        MsgDisp("Nanatsumori","...No.
Let's swim. ＧＯ!");
        MsgDisp("主人公","But...");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0);
        VoicePlay("B040406102_04_050");
        MsgDisp("Nanatsumori","Actually, If I got injured, or get a bad
tan, It'll affect my modelling work, so
I've been told to avoid this kind of
thing.");
        MsgDisp("主人公","Ah... I see.
I'm sorry for not taking
that into consideration.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040406102_04_060");
        MsgDisp("Nanatsumori","I'm also sorry for
keeping quiet about it.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040406102_04_070");
        MsgDisp("Nanatsumori","Come on, your hand.");
        MsgDisp("主人公","Eh?");
        ChEye(4,4);
        ChMouth(4,3);
        VoicePlay("B040406102_04_080");
        MsgDisp("Nanatsumori","If we hold hands and float out to the sea,
I probably won't get injured or get a bad
tan.");
        MsgDisp("主人公","True!");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040406102_04_090");
        MsgDisp("Nanatsumori","We'll look like a couple, 
But I'll just accept it for today.
It's a date after all, right? ");
        MsgDisp("主人公","(｛七ツ森＊｝...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040406102_04_100");
    MsgDisp("Nanatsumori","That's a weird way to put it, 
but I agree. Let's bury ourselves 
in the sand and take a nap.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040406102_04_110");
    MsgDisp("Nanatsumori","What do you mean
by playing in the water? Well it'll
probably be better than swimming...");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
