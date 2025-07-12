BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm running late...
｛本多＊＊｝ is... Oh!)");
BGMPlay("BGM_C03_HONDA_A",0.01);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,3);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("B010300000_03_000");
    MsgDisp("Honda","Oh, over here!");
    MsgDisp("主人公","I'm sorry for making you wait.");
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B010300000_03_010");
    MsgDisp("Honda","Really?
I wasn't worried about it at all.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDisp("主人公","I'm sorry for making you wait.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B010300000_03_020");
    MsgDisp("Honda","It's o-kay!
But was I waiting that long?");
    MsgDisp("主人公","Yeah...
I'll be more careful from now on.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B010300000_03_030");
    MsgDisp("Honda","Then I'll be careful too!");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Hehe.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","I'm sorry for making you wait.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B010300000_03_040");
    MsgDisp("Honda","It's okay.
But I got a little worried,
because you're always so reliable.");
    ChEye(3,3);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B010300000_03_050");
    MsgDisp("Honda","Oh, I know!
You should just show up late all the time.");
    MsgDisp("主人公","What??");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B010300000_03_060");
    MsgDisp("Honda","Then I can build up antibodies to it,
and that will give me peace of mind.
Right?");
    MsgDisp("主人公","I just won't be late again!");
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    MsgDispSksp(1,0);
    VoicePlay("B010300000_03_070");
    MsgDisp("Honda","I see.
Then, let's go!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
