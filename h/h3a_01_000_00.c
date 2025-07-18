BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,3);
    ChMotion(1,3);
    VoicePlay("H3A0100000_01_000");
    MsgDisp("Kazama","You won championships?
Amazing.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
We did it!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H3A0100000_01_010");
    MsgDisp("Kazama","Guess I'm risking my life if I ever pick a
fight with you.");
    MsgDisp("主人公","Hehe, jeez!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H3A0100000_01_020");
    MsgDisp("Kazama","The pinnacle of high school students in
this country.
It suits you.");
    MsgDisp("主人公","Thanks!");
    MsgDisp("主人公","(I really won.
I'm glad I practiced so much!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,3);
    ChMotion(1,3);
    VoicePlay("H3A0100000_01_030");
    MsgDisp("Kazama","Awesome.
It felt like that stage was made just for
you.");
    MsgDisp("主人公","｛風真＊＊｝, you came to cheer
for me!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H3A0100000_01_040");
    MsgDisp("Kazama","Yeah, I didn't want to see you get hurt,
but looks like I was worrying for nothing.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H3A0100000_01_050");
    MsgDisp("Kazama","Congratulations on winning.");
    MsgDisp("主人公","Yeah, thanks.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("H3A0100000_01_060");
    MsgDisp("Kazama","What was amazing wasn't just that you were
strong.
...It was kind of beautiful.");
    MsgDisp("主人公","Hm?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H3A0100000_01_070");
    MsgDisp("Kazama","Even though I doesn't know much about
judo, I feel like I could understand the
appeal.");
    MsgDisp("主人公","That makes me happy.
Thanks!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H3A0100000_01_080");
    MsgDisp("Kazama","Ah, I'm just telling you now, but don't go
off too far on your own.
I'll be in trouble if I can't reach you.");
    MsgDisp("主人公","(Hehe, ｛風真＊＊｝
congratulated me!
I'm glad I practiced so much!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
