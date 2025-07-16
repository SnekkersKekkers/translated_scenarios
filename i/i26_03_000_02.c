BGOpen("ar600",0);
BGMPlay("BGM_C03_HONDA_A");
MsgClose();
ChOpen(3,35,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_220");
    MsgDisp("Honda","Hm?
The person who arranged this shelf......");
    MsgDisp("主人公","It was me, but should I not have?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_230");
    MsgDisp("Honda","No, not at all!
But, wasn't it difficult?
Sorry for making you do it all.");
    MsgDisp("主人公","No problem.
You were in the middle of helping our
customers, right, ｛本多＊＊｝?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_240");
    MsgDisp("Honda","But, finding things to do and doing it on
your own means you're getting used to your
job, right?");
    MsgDisp("主人公","(I did it!
I'm glad I could be of some help.)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_250");
    MsgDisp("Honda","Wow, pop ads?
I didn't know you were good at them.");
    MsgDisp("主人公","Ah, I was just trying it out......");
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("I260300000_03_260");
    MsgDisp("Honda","Huh, what a waste!
Let's get the manager's approval and put
it out properly.");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_270");
    MsgDisp("Honda","Small publishers are putting out great
books that get buried under promotions for
bigger books.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_280");
    MsgDisp("Honda","I've made pop ads in the past trying to do
something about it, but......");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_290");
    MsgDisp("Honda","This is way better than what I did.");
    MsgDisp("主人公","Really?");
    ChMotion(3,1,1);
    VoicePlay("I260300000_03_300");
    MsgDisp("Honda","Yeah, really!
I wanted to say a lot, and before I knew
it, it was all full of words.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_310");
    MsgDisp("Honda","Compared to that, yours is easy to read
and the content is perfect.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    VoicePlay("I260300000_03_320");
    MsgDisp("Honda","Manager!
I have a suggestion!");
    SEWait();
    MsgDisp("主人公","(I did it!
I'm really happy my work was appreciated!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
