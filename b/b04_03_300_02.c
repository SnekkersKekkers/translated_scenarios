BGOpen("bh310",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("B040330002_03_000");
MsgDisp("Honda","There's a separate room to raise insects
and fish.");
MsgSel("Are they ｛本多＊＊｝'s pets?'","Won't they run away?","Haa, that's good.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040330002_03_010");
    MsgDisp("Honda","Hmm, I wonder.
They're not my pets.
But I give them names.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040330002_03_020");
    MsgDisp("Honda","They have, they have.
When I feed them, I sometimes forget to
close the lid.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChSet(3,2);
        VoicePlay("B040330002_03_030");
        MsgDisp("Honda","Eh, do you dislike coming to my room that
much?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040330002_03_040");
        MsgDisp("Honda","...I see.
You really dislike them that much?");
        MsgDisp("主人公","No, it's just that I'm not very good with
them.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0);
        VoicePlay("B040330002_03_050");
        MsgDisp("Honda","Then, let's put the creatures aside, And
try some fortune telling?");
        MsgDisp("主人公","Eh, ｛本多＊＊｝, you can fortune-tell?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040330002_03_060");
        MsgDisp("Honda","Yep yep, Yeah, I like the concept based on
the Five Elements theory and I've read
quite a few books on it");
        ChMotion(3,4);
        VoicePlay("B040330002_03_070");
        MsgDisp("Honda","But it's more about compatibility, I
think. It's the idea that everything in
the world is connected and has a flow.");
        MsgDisp("主人公","｛本多＊＊｝, that's amazing.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040330002_03_080");
        MsgDisp("Honda","When you compliment me like this, it
motivates me to grow even more!
That's the positive flow.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,4);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040330002_03_090");
        MsgDisp("Honda","The people with whom this flow works
smoothly are the ones you're compatible
with. So, you and I are a perfect match.");
        MsgDisp("主人公","(Umm... is this fortune telling?)");
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
