BGMStop();
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're showing tradtional
wedding dresses. I think I was able to
make it pretty but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,3,-1,-1,0,0,0,60);
    VoicePlay("P730400002_04_000");
    MsgDisp("Nanatsumori","As expected that dress is foul playー.");
    MsgDisp("主人公","Ah,｛七ツ森＊｝!");
    ChEye(4,4);
    ChMouth(4,3);
    VoicePlay("P730400002_04_010");
    MsgDisp("Nanatsumori","Nice.
After this, let me take a picture.");
    MsgDisp("主人公","Yeah, that's fine.");
    ChMotion(4,1,1);
    VoicePlay("P730400002_04_020");
    MsgDisp("Nanatsumori","Can I take one next to you?");
    MsgDisp("主人公","Eh?");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P730400002_04_030");
    MsgDisp("Nanatsumori","Well, we're here anyways, 
right?");
    SEPlay("EV_SE_038");
    SEWait();
    ChMotion(4,0,1);
    VoicePlay("P730400002_04_040");
    MsgDisp("Nanatsumori","Then, the bride should make her way to the
stage. Look your best!");
    MsgDisp("主人公","Yeah!
Then, I'm off!");
    MsgDisp("主人公","(Alーright! This is the last runway of my
high school life, let's do it properly!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're showing tradtional
wedding dresses. I think I was able to
make it pretty but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,3,3,-1,-1,5,0,0,60);
    VoicePlay("P730400002_04_050");
    MsgDisp("Nanatsumori","…………");
    MsgDisp("主人公","Ah,｛七ツ森＊｝.
...what's wrong?");
    ChMouthOpenLevel(4,-1);
    VoicePlay("P730400002_04_060");
    MsgDisp("Nanatsumori","You're beautiful.");
    MsgDisp("主人公","T-thank you...
I'm a little embarassed.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMouthOpenLevel(4,0);
    VoicePlay("P730400002_04_070");
    MsgDisp("Nanatsumori","…………");
    ChMotion(4,1,1);
    ChMouthOpenLevel(4,-1);
    VoicePlay("P730400002_04_080");
    MsgDisp("Nanatsumori","I wonder who will be able to stand
alongside you when you look 
like that in the future.");
    MsgDisp("主人公","Hehe.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("P730400002_04_090");
    MsgDisp("Nanatsumori","I...");
    ChEye(4,1);
    ChMouth(4,3);
    VoicePlay("P730400002_04_100");
    MsgDisp("Nanatsumori","Seriously, a switch has been flipped.");
    MsgDisp("主人公","?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P730400002_04_110");
    MsgDisp("Nanatsumori","It feels strange sending you off, but...
do your best.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(Alーright!
Let's do the last runway of my
high schol life properly!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChCheek(4,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(4,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
