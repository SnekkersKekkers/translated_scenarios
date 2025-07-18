BGMStop();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're displaying wedding
dresses. This is my last one...I have to
make it a success!)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,4,4,#1,#1,5,0);
    VoicePlay("P730500002_05_000");
    MsgDisp("Hiiragi","It's wonderful, yes?
The wedding dress...");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!");
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("P730500002_05_010");
    MsgDisp("Hiiragi","To be able to see you in a wedding dress,
I'm a lucky person.");
    MsgDisp("主人公","Come on, you're exaggerating?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChCheek(5,0);
    VoicePlay("P730500002_05_020");
    MsgDisp("Hiiragi","That's what I really think.
If you weren't part of the Handicrafts
club, I wouldn't be able to see this.");
    ChEye(5,4);
    VoicePlay("P730500002_05_030");
    MsgDisp("Hiiragi","I'm grateful.");
    MsgDisp("主人公","Thank you. That's right, it's because I
continued with the Handicrafts club that I
was able to stand on stage wearing a
wedding dress.");
    ChEye(5,0);
    ChMotion(5,3);
    Wait(20,1);
    VoicePlay("P730500002_05_040");
    MsgDisp("Hiiragi","Yes, think of it as a reward to yourself,
and enjoy.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","｛柊＊＊＊｝...
Yes, I'll enjoy it.");
    ChMotion(5,0);
    VoicePlay("P730500002_05_050");
    MsgDisp("Hiiragi","I'll also be cheering you on from the
audience.");
    MsgDisp("主人公","(Well, this is my last show.
In order to not regret it, I'll go forth
with all of my heart...!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're displaying wedding
dresses. This is my last one...I have to
make it a success!)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,4,2,#1,#1,7,0);
    VoicePlay("P730500002_05_060");
    MsgDisp("Hiiragi","...Hu.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝..");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("P730500002_05_070");
    MsgDisp("Hiiragi","...I heard the third years were wearing
wedding dresses they made, but actually,
when I look at you, no words come out.");
    MsgDisp("主人公","I hope that means it's turned out well...");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P730500002_05_080");
    MsgDisp("Hiiragi","Do not fret.
You're that wonderful that I hesitated to
call out to you.");
    MsgDisp("主人公","Really?
I'm happy.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    ChCheek(5,0);
    Wait(20,1);
    VoicePlay("P730500002_05_090");
    MsgDisp("Hiiragi","Yes, it's to the extent that I want to
take you away like this.");
    MsgDisp("主人公","Eh...?");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P730500002_05_100");
    MsgDisp("Hiiragi","It's a joke.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P730500002_05_110");
    MsgDisp("Hiiragi","It cannot be helped. I'll share this
happiness with everyone in the audience.
Have fun.");
    MsgDisp("主人公","...Yeah!");
    MsgDisp("主人公","(Alright, this is my last runway.
In order to not regret it, I'll go forth
with all of my heart...!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
