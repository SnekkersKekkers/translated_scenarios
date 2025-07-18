switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S060500001_05_000");
    MsgDisp("Hiiragi","What a fine day to wear a kimono.
It's nice.");
    MsgDisp("主人公","Yeah, what do you think?");
    ChEye(5,0);
    VoicePlay("S060500001_05_010");
    MsgDisp("Hiiragi","Since you're not used to wearing one, it
may be hard to move around. Don't let it
get dirty and be careful of how you walk.");
    MsgDisp("主人公","(I guess he likes it...?)");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S060500001_05_020");
    MsgDisp("Hiiragi","You tried your best.");
    MsgDisp("主人公","Is it too cliche?");
    ChMotion(5,4);
    VoicePlay("S060500001_05_030");
    MsgDisp("Hiiragi","I don't mean it that way.
It's impressive.
I'm happy to be standing next to you.");
    MsgDisp("主人公","Impressive...");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S060500001_05_040");
    MsgDisp("Hiiragi","Yes.
It means that you are well dressed.");
    MsgDisp("主人公","(...Well, he seems happy, so I'm happy!)");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("S060500001_05_050");
    MsgDisp("Hiiragi","Women's kimonos are really nice, after
all.");
    MsgDisp("主人公","Do you like it?");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("S060500001_05_060");
    MsgDisp("Hiiragi","Yes.
I can't help but be mesmerized by it, I
suppose.");
    MsgDisp("主人公","Hehe, yay!");
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("S060500001_05_070");
    MsgDisp("Hiiragi","Your charisma exploded.
You look so graceful and full of life.");
    MsgDisp("主人公","Huh, exploded?
Is that supposed to be a compliment...?");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("S060500001_05_080");
    MsgDisp("Hiiragi","Yes, it's the number one compliment of the
year.");
    MsgDisp("主人公","Geez, but it's still only New Years.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("S060500001_05_090");
    MsgDisp("Hiiragi","Right.
But this rating won't change throughout
the rest of the year!");
    MsgDisp("主人公","(Hehe, what a relief.
It seems that he really likes it!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
