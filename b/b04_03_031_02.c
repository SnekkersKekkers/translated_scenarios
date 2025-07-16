BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303102_03_000");
MsgDisp("Honda","We made it to the aquarium!
You seem to like it too, right?");
MsgSel("The quiet and calm atmosphere is nice, isn't it?","It's a classic after all.","Yeah, the smell of the sea is nice, no?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4,1);
        VoicePlay("B040303102_03_010");
        MsgDisp("Honda","Oh, is that how you feel? I'm the
opposite. With so many things to observe,
I can't calm down at all.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040303102_03_020");
        MsgDisp("Honda","I see...");
        MsgDisp("主人公","What's wrong?");
        ChMotion(3,0);
        VoicePlay("B040303102_03_030");
        MsgDisp("Honda","When I come here, there are various things
I want to check, and there are several
specimens that I observe regularly...");
        ChEye(3,2);
        ChMouth(3,2);
        ChMotion(3,4);
        VoicePlay("B040303102_03_040");
        MsgDisp("Honda","It can't have been a calm atmosphere, huh?");
        MsgDisp("主人公","No, it's nice.
I was looking forward to listening to
｛本多＊＊｝.");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040303102_03_050");
        MsgDisp("Honda","Really?
But today I'll speak calmly - is that
okay?");
        MsgDisp("主人公","I'd be happy if you could have fun talking
to me like you always do.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040303102_03_060");
        MsgDisp("Honda","Of course I'm having fun.
Because you're listening to me.");
        MsgDisp("主人公","Hehe, yeah.");
        ChEye(3,3);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040303102_03_070");
        MsgDisp("Honda","Oh? I mean, I'm... I might be learning
things that I think will be fun for you to
hear about.");
        MsgDisp("主人公","Huh∋");
        ChEye(3,4);
        ChMouth(3,4);
        VoicePlay("B040303102_03_080");
        MsgDisp("Honda","It's strange. Lately, when I learn
something, I find myself thinking about
how to talk to you about it.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        ChCheek(3,8);
        VoicePlay("B040303102_03_090");
        MsgDisp("Honda","But in the end, the instant we meet I
forget about it all and I just talk to you
freely.");
        MsgDisp("主人公","(I can't believe ｛本多＊＊｝
thinks of me that way...
I'm so happy.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040303102_03_100");
    MsgDisp("Honda","Classic, huh...
You're right, theories and the basics are
important.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040303102_03_110");
    MsgDisp("Honda","Mm-hmm, that's right! Because our sense of
smell is also stimulated, whatever we
learn here could really stick in our
memory.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
