BGMPlay("BGM_PLACE_SHOP");
BGOpen("sc724",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts in the
Gardening Club...)");
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    VoicePlay("P630100002_01_000");
    MsgDisp("Kazama","Pardon the intrusion.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Welcome!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("P630100002_01_010");
    MsgDisp("Kazama","So we can eat here this year.");
    MsgDisp("主人公","Yes. We're serving dishes made using the
vegetables organically grown by the
Gardening Club.");
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    Wait(12,0);
    ChEye(1,0);
    VoicePlay("P630100002_01_020");
    MsgDisp("Kazama","It also seems like you've gotten used to
customer service.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("P630100002_01_030");
    MsgDisp("Kazama","Then, shall I get your recommendation?");
    ChEyeOpenLevel(1,#1);
    MsgDisp("主人公","It's the organic salad.
I've received your order～!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're doing an organic cafe.
It's a culmination of my efforts in the
Gardening Club...)");
    MsgClose();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    VoicePlay("P630100002_01_040");
    MsgDisp("Kazama","Heeーh, your outfit also suits you,
doesn't it?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝!
Welcome～!
I'm a cafe maid.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P630100002_01_050");
    MsgDisp("Kazama","That's fine, but your energy is that of a
greengrocers.");
    MsgDisp("主人公","Hehe, yeah.
After all, w're selling the vegetables as
a souvenir.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P630100002_01_060");
    MsgDisp("Kazama","Is that so. Then, can I have something
from the cafe first? What's your
recommendation?");
    MsgDisp("主人公","Actually, if you want to taste the
vegetables as they are, maybe a salad?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P630100002_01_070");
    MsgDisp("Kazama","Then, I'll have a large serving.");
    MsgDisp("主人公","Certainly.
One organic vegetable salad coming up!");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
