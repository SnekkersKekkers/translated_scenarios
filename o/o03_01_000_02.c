BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,2,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030100002_01_000");
    MsgDisp("Kazama","Seriously.
Being this far out of sync is actually
funny.");
    MsgDisp("主人公","(Hm.
The three-legged race is hard...)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030100002_01_010");
    MsgDisp("Kazama","We're last?
There must be some kind of mistake...");
    MsgDisp("主人公","I'm the one who dragged us down.");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("O030100002_01_020");
    MsgDisp("Kazama","We can't go on like this.
Let's go to school together from now on
with our legs tied together.");
    MsgDisp("主人公","Huh!?");
    MsgDisp("主人公","(Last, huh...
Looks like something weird started in
｛風真＊＊｝...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,3);
    ChMotion(1,3);
    VoicePlay("O030100002_01_030");
    MsgDisp("Kazama","Amazing, last.");
    MsgDisp("主人公","Um...
Sorry.
It's probably my fault.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030100002_01_040");
    MsgDisp("Kazama","Why apologize?
It's fine, we stand out more than first
place.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("O030100002_01_050");
    MsgDisp("Kazama","The whole school is seeing us as a pair.
The broadcast called our names out a lot,
too.");
    MsgDisp("主人公","Huh!?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O030100002_01_060");
    MsgDisp("Kazama","It depends on how you look at it.
For us, last is fine, isn't it?");
    MsgDisp("主人公","(Last, huh...
But ｛風真＊＊｝ doesn't seem to care
about our rank...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
