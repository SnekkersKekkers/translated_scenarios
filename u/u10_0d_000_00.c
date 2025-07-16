BGOpen("sc511",0);
MsgClose();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("U100D00000_21_000");
MsgDisp("Michiru","Mari.");
MsgDisp("主人公","｛みちる＊｝,
｛ひかる＊｝.
What's up?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("U100D00000_22_000");
MsgDisp("Hikaru","We have a day off tomorrow.
If you're free, let's have a sleepover!");
MsgDisp("主人公","A sleepover?
At your home?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("U100D00000_21_010");
MsgDisp("Michiru","Yes.
A girl's only sleepover.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("U100D00000_22_010");
MsgDisp("Hikaru","We can have girl talk in our pajamas▼");
MsgSel("Ok, I'll go!","Sorry, I'm busy......");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,5,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("U100D00000_22_020");
    MsgDisp("Hikaru","Yay!
This will be so fun.
I want to go home already♪");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("U100D00000_21_020");
    MsgDisp("Michiru","Hehe.
Me too.
Well then, see you after school.");
    MsgDisp("主人公","Yeah!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("U100D00000_22_030");
    MsgDisp("Hikaru","I have a lot of things I want to ask you▼
Are you prepared? A bientot! Mari!");
    MsgDisp("主人公","(A sleepover at
｛みちる＊｝ and
｛ひかる＊｝'s home. This
will be fun!)");
    break ;
    case 1:
    ChEye(22,2);
    ChMouth(22,1);
    ChMotion(22,5,1);
    VoicePlay("U100D00000_22_040");
    MsgDisp("Hikaru","Ehーh∋
No way......");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,0);
    VoicePlay("U100D00000_21_030");
    MsgDisp("Michiru","It's no problem if you have something else
to do.");
    MsgDisp("主人公","Yeah, sorry.");
    VoicePlay("U100D00000_21_040");
    MsgDisp("Michiru","Don't worry.
We'll try again some other time.");
    ChEye(22,2);
    ChMouth(22,2);
    ChMotion(22,0,1);
    VoicePlay("U100D00000_22_050");
    MsgDisp("Hikaru","Well, I guess it can't be helped～
Next time, okay Mari?");
    MsgDisp("主人公","(Even though they went through the trouble
of inviting me...... did I make the right
choice?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
