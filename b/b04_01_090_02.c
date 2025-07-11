BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040109002_01_000");
MsgDisp("Kazama","Gardening was pretty popular in England,
too.");
MsgSel("Where they drink good tea in beautiful gardens, right?","I really admire English gardens","｛風真＊＊｝, can you also garden?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040109002_01_010");
    MsgDisp("Kazama","Yep.
With delicious cakes and cookies, too.");
    ChEyeOpenLevel(1,-1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040109002_01_020");
    MsgDisp("Kazama","It may sound fancy,
but English gardens aren't formal at all.
It's just about enjoying nature freely.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040109002_01_030");
        MsgDisp("Kazama","If you ask whether I can or not, I can.
But you can always do it yourself, right?
So why don't you garden?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040109002_01_040");
        MsgDisp("Kazama","Don't talk like I'm a jack-of-all-trades.");
        MsgDisp("主人公","Huh?");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040109002_01_050");
        MsgDisp("Kazama","You know, when you're working with things
like antiques, you have to have a broad
range of knowledge to sell the items.");
        MsgDisp("主人公","Yeah, even now you make a
really good antique seller.");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040109002_01_060");
        MsgDisp("Kazama","So maybe I could do it if I tried.
Whether I want to or not is the question.");
        MsgDisp("主人公","｛風真＊＊｝?");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,0);
        VoicePlay("B040109002_01_070");
        MsgDisp("Kazama","Japanese and English gardens both have
their merits, and I do like them both. But
isn't that sort of superficial?");
        MsgDisp("主人公","Huh?");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040109002_01_080");
        MsgDisp("Kazama","Any time, any place, any part of the
world... That's my dad's favorite saying.
But isn't it better to be devoted to one
thing?");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040109002_01_090");
        MsgDisp("Kazama","That's all I've been thinking about,
since I came back.");
        MsgDisp("主人公","I don't think there's anything shallow
about you. I think it's amazing how much
you know and can do.");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040109002_01_100");
        MsgDisp("Kazama","I see...
Thank you.");
        ChEyeOpenLevel(1,0);
        Wait(10,0);
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040109002_01_110");
        MsgDisp("Kazama","Strangely enough, if you
think something is amazing, then I feel
like it must be okay after all.");
        MsgDisp("主人公","(｛風真＊＊｝ seems a little troubled...)");
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
