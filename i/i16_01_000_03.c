BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(I hope this is okay for
the new display......)");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,2,2,#1,#1,0,0);
    VoicePlay("I160100003_01_000");
    MsgDisp("Kazama","You......
Are you having fun?");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I160100003_01_010");
    MsgDisp("Kazama","This display is pretty close
to what we had two months ago, right?");
    MsgDisp("主人公","Ah...... you're right.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("I160100003_01_020");
    MsgDisp("Kazama","A lot of Simon's customers are
regulars. Don't cut corners so obviously.");
    MsgDisp("主人公","I'm sorry......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100003_01_030");
    MsgDisp("Kazama","It's the basics to also have fun
with the display, right?");
    MsgDisp("主人公","(Haa......
Alright, let's go back to the basics
and do our best!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(This will stand out here......)");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,2,#1,#1,0,0);
    ChMotion(1,3);
    VoicePlay("I160100003_01_040");
    MsgDisp("Kazama","Don't display this that high.");
    MsgDisp("主人公","Huh, but I thought
it'd be easier to see that way......");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I160100003_01_050");
    MsgDisp("Kazama","Listening? That product's for
children, right? They can't see it that
high, and it's dangerous if they try.");
    MsgDisp("主人公","I see......");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I160100003_01_060");
    MsgDisp("Kazama","Remember to think about the
customer's perspective.");
    MsgDisp("主人公","Yeah...... I'm sorry.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100003_01_070");
    MsgDisp("Kazama","If you have time to apologize,
I'll leave making this
display better to you.");
    MsgDisp("主人公","(Haa, I still have
a long way to go...... Alright, let's be
careful not to make the same mistake!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
