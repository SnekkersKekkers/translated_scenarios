MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C04_NANA_KOKU",0.01);
ChNanaType(0);
ChOpen(4,40,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛七ツ森＊｝...");
ChEye(4,0);
ChMouth(4,4);
VoicePlay("T020400000_04_000");
MsgDisp("Nanatsumori","That's good.
I'm glad you're here.");
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("T020400000_04_010");
MsgDisp("Nanatsumori","So this is what the inside of the church
look like.
It's beautiful.");
MsgDisp("主人公","Yes, it is isn't it?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("T020400000_04_020");
MsgDisp("Nanatsumori","... Hey.
The fact that you're here makes me wonder
if I can have a little bit of hope.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("T020400000_04_030");
MsgDisp("Nanatsumori","If I can really believe in the legendary
rumour.");
MsgDisp("主人公","Eh...");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("T020400000_04_040");
MsgDisp("Nanatsumori","I love you.");
MsgDisp("主人公","!");
VoicePlay("T020400000_04_050");
MsgDisp("Nanatsumori","During the school trip I tried shouting as
hard as I could too.
... Didn't it get through to you?");
MsgDisp("主人公","...Ah.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("T020400000_04_060");
MsgDisp("Nanatsumori","Haha.
I guess you just realized?");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2);
ChEyeOpenLevel(4,0);
ChMouthOpenLevel(4,0);
VoicePlay("T020400000_04_070");
MsgDisp("Nanatsumori","......");
ChMotion(4,0);
ChEyeOpenLevel(4,10);
ChMouthOpenLevel(4,#1);
VoicePlay("T020400000_04_080");
MsgDisp("Nanatsumori","From that day on, was when I truly fell in
love with you.");
VoicePlay("T020400000_04_090");
MsgDisp("Nanatsumori","To be honest, when I first met you I
thought you were a pain.");
ChMotion(4,2,1);
VoicePlay("T020400000_04_100");
MsgDisp("Nanatsumori","But... before I knew it, the tables had
turned.
The one who was causing trouble was me.");
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("T020400000_04_110");
MsgDisp("Nanatsumori","Models and influencers, things like that.
We're all forced to keep things secret for
our own selfish convenience.");
ChEye(4,4);
ChMouth(4,4);
VoicePlay("T020400000_04_120");
MsgDisp("Nanatsumori","But, you were always getting closer to me
with a smile on your face.
Always, and always...");
VoicePlay("T020400000_04_130");
MsgDisp("Nanatsumori","Your kindness and warmth gradually
dispelled the darkness in my heart.");
MsgClear();
ChClose(4);
ChCustomLayout(4,5,0,-2.8);
Wait(60);
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,40,0,4,4,#1,#1,0,0,0,120);
VoicePlay("T020400000_04_140");
MsgDisp("Nanatsumori","When I saw my hometown's light
illumination on the night of the last
christmas, I made a decision.");
VoicePlay("T020400000_04_150");
MsgDisp("Nanatsumori","That I would tell you my feelings.
Here, in this place.");
ChMotion(4,3,1);
ChMouth(4,0);
VoiceEVSPlay(4);
VoicePlay("T020400000_04_160");
MsgDisp("Nanatsumori","｛主人公｝, I like you.
I want you to go out with me.");
VoicePlay("T020400000_04_170");
MsgDisp("Nanatsumori","Tell me...your answer.");
