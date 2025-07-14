BGMPlay("BGM_SPORTS_DAY");
BGOpen("sc760",0);
MsgClose();
ChOpen(3,30,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("O030300001_03_000");
    MsgDisp("Honda","I think we did well enough by not coming
last, right?");
    MsgDisp("主人公","(Hm, I wish we could've been a little more
in sync......)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("O030300001_03_010");
    MsgDisp("Honda","Yeah, I guess that's it.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("O030300001_03_020");
    MsgDisp("Honda","Ah, could it be......
You wanted first place?");
    MsgDisp("主人公","(Hm, did we have different goals?
No, we were definitely out of sync......)");
    break ;
    case 4:
    case 5:
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("O030300001_03_030");
    MsgDisp("Honda","Da, we couldn't make it to first.");
    MsgDisp("主人公","Sorry.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("O030300001_03_040");
    MsgDisp("Honda","Hm, why are you apologizing? A team in a
three-legged race has two people, right?
Then, I should apologize, too.");
    MsgDisp("主人公","No, but......");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O030300001_03_050");
    MsgDisp("Honda","I'm satisfied, you know?
I was glad to just be in a team with you.
Anything more would be asking too much.");
    MsgDisp("主人公","(Ugh...... But I still wish we were a
little more in sync......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
