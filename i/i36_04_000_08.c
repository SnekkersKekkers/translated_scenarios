BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,4,#1,#1,0,0);
    VoicePlay("I360400008_04_000");
    MsgDisp("Nanatsumori","Hm?
This apple compote...");
    MsgDisp("主人公","Huh?");
    ChMouth(4,3);
    VoicePlay("I360400008_04_010");
    MsgDisp("Nanatsumori","Delicious.
The sweetness is just right, and you can
still feel the texture of the apples.");
    ChMotion(4,1,1);
    VoicePlay("I360400008_04_020");
    MsgDisp("Nanatsumori","It's great with the ice cream, too.
Seems like there are some spices in it
that go well with it.");
    MsgDisp("主人公","Really?
Thanks!");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I360400008_04_030");
    MsgDisp("Nanatsumori","Why are you saying that?");
    MsgDisp("主人公","I came up with that ice cream dessert
recipe with the manager.");
    ChMouth(4,4);
    VoicePlay("I360400008_04_040");
    MsgDisp("Nanatsumori","Wow.
No wonder I thought it was a little
different than the usual Alucard stuff.");
    MsgDisp("主人公","Huh, meaning...");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400008_04_050");
    MsgDisp("Nanatsumori","Of course, in a good way.
You're already a veteran worker in this
cafe.");
    MsgDisp("主人公","(I did it!
I'm glad I worked hard at Alucard!)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,3,3,#1,#1,0,0);
    VoicePlay("I360400008_04_060");
    MsgDisp("Nanatsumori","This apple compote is amazing!");
    MsgDisp("主人公","Huh.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400008_04_070");
    MsgDisp("Nanatsumori","This texture and taste is perfect to me.
And it goes super well with the ice cream.
It's the best...");
    MsgDisp("主人公","Thank goodness, I'm glad!");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I360400008_04_080");
    MsgDisp("Nanatsumori","Hm?
Why are you the one who's glad?");
    MsgDisp("主人公","I came up with that ice cream dessert
recipe with the manager.");
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400008_04_090");
    MsgDisp("Nanatsumori","I get it...
That's why it's delicious.");
    MsgDisp("主人公","?");
    ChMotion(4,0,1);
    VoicePlay("I360400008_04_100");
    MsgDisp("Nanatsumori","Because I felt all the love in it.");
    MsgDisp("主人公","Huh...");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("I360400008_04_110");
    MsgDisp("Nanatsumori","Hm, are you feeling shy?
It's true, though.");
    ChEyeOpenLevel(4,#1);
    VoicePlay("I360400008_04_120");
    MsgDisp("Nanatsumori","Showing love to the guests of this cafe as
a waitress is what I meant, of course.");
    MsgDisp("主人公","Ah, yeah.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400008_04_130");
    MsgDisp("Nanatsumori","My, my...
I'd be happy even if you said \"that's not
it\", you know?");
    MsgDisp("主人公","(｛七ツ森＊｝...
I'm glad I worked hard at Alucard!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
