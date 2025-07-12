BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,4,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020200001_02_000");
    MsgDisp("Sassa","Oh, you look frustrated.
You almost had it.");
    MsgDisp("主人公","Yeah......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O020200001_02_010");
    MsgDisp("Sassa","It's fine.
Rather than just feeling bad after losing,
I like this feeling a lot better.");
    MsgDisp("主人公","(｛颯砂＊＊｝, is that a compliment......?
Haa, how frustrating.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,4,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020200001_02_020");
    MsgDisp("Sassa","Too bad, you were so close.");
    MsgDisp("主人公","Yeah, but I lost.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O020200001_02_030");
    MsgDisp("Sassa","I know you put your all into it.
My voice is hoarse now, too.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("O020200001_02_040");
    MsgDisp("Sassa","But you know, when you go all out,
it's fun even if you lose.");
    MsgDisp("主人公","I guess so.
But I still wanted to win.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O020200001_02_050");
    MsgDisp("Sassa","That's good. With that
determination, victory is sure to come.
Let's do our best until the end.");
    MsgDisp("主人公","(Haa...... How frustrating. But, like
｛颯砂＊＊｝ said, let's do our best
until the end of the sports festival.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,4,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("O020200001_02_060");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","｛颯砂＊＊｝, I lost......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O020200001_02_070");
    MsgDisp("Sassa","Yeah, how frustrating.
Just one more push......");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("O020200001_02_080");
    MsgDisp("Sassa","Aah, not a push.
You have to pull, right?");
    MsgDisp("主人公","Huh?　Hehe, yeah.
Since it's tug of war.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("O020200001_02_090");
    MsgDisp("Sassa","Right, I knew that I needed you
to smile. Otherwise, the sports festival
wouldn't be fun.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("O020200001_02_100");
    MsgDisp("Sassa","There are still programs left.
Let's do our best for the rest of them.");
    MsgDisp("主人公","Yeah.
You're right.");
    MsgDisp("主人公","(｛颯砂＊＊｝, thank you.
Yeah, let's enjoy the sports festival
until the end!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
