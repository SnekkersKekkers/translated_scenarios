BGOpen("ar300",0);
BGMPlay("BGM_C03_HONDA_A",0.01);
MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("I650300000_03_000");
    MsgDisp("Honda","Hm, is this it?");
    MsgDisp("主人公","Welcom- wait, ｛本多＊＊｝?
What's up?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("I650300000_03_010");
    MsgDisp("Honda","I was just passing by when
I remembered that you work part-time here.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I650300000_03_020");
    MsgDisp("Honda","Hm, the uniform suits you, and
it definitely looks like you're getting
used to the job, too.");
    MsgDisp("主人公","No, I still have a long way to go.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I650300000_03_030");
    MsgDisp("Honda","But, I'm sure you'll pick it up
quickly. Good luck!");
    MsgDisp("主人公","(Alright, let's do our best!)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I650300000_03_040");
    MsgDisp("Honda","It really is you.");
    MsgDisp("主人公","｛本多＊＊｝, what's up?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("I650300000_03_050");
    MsgDisp("Honda","I heard you were working part-time
here, so I thought I'd check on you.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I650300000_03_060");
    MsgDisp("Honda","But I'm not used to seeing you
in those clothes, so I thought it was
someone else.");
    MsgDisp("主人公","Hehe, thanks for calling out to me.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I650300000_03_070");
    MsgDisp("Honda","You too!
Thanks for showing me such a nice smile.
See ya, good luck with work!");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(A nice smile, huh......
Alright, let's keep working hard
just like this!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Welcome!
......Ah, ｛本多＊＊｝.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I650300000_03_080");
    MsgDisp("Honda","It's pretty busy, huh?
The customers just keep on coming.
......But, I'm a little surprised.");
    MsgDisp("主人公","Hm?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("I650300000_03_090");
    MsgDisp("Honda","Working at a gas station must be
pretty hard work, so I thought that all
the staff here would be male.");
    MsgDisp("主人公","Aah, I see what you mean.
But my work mostly just involves
cleaning the car windows.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("I650300000_03_100");
    MsgDisp("Honda","But weren't you the one 
carrying tires around earlier?");
    MsgDisp("主人公","You saw?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("I650300000_03_110");
    MsgDisp("Honda","Yeah. Aren't they pretty heavy?
You know, you'll hurt your back if you
carry them leaning forward like that.");
    ChMotion(3,4,1);
    VoicePlay("I650300000_03_120");
    MsgDisp("Honda","It's better to use a trolley to
roll them instead of carrying them around,
even if it's more tedious......");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I650300000_03_130");
    MsgDisp("Honda","But, you chose this part-time job,
so it's not really my place to
say anything.");
    MsgDisp("主人公","Not at all, thanks for
worrying about me.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("I650300000_03_140");
    MsgDisp("Honda","Yeah.
Just do your best without 
getting hurt!");
    MsgDisp("主人公","(｛本多＊＊｝ is so nice......
I'll have to make sure I don't worry
｛本多＊＊｝ too much.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
