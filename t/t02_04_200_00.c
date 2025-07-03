SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C04_NANA_KOKU",0.01);
MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ChNanaType(0);
ChOpen(4,40,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("T020420000_04_000");
MsgDisp("Nanatsumori","｛主人公｝.");
MsgDisp("主人公","｛七ツ森＊｝……！");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("T020420000_04_010");
MsgDisp("Nanatsumori","Yo.
The person you're waiting for......
Is it a relief that I'm here?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("T020420000_04_020");
MsgDisp("Nanatsumori","I love you.");
MsgDisp("主人公","！");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("T020420000_04_030");
MsgDisp("Nanatsumori","......I mean, 
It's only thanks to those guys 
that I can say this.");
MsgDisp("主人公","......Those guys?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("T020420000_04_040");
MsgDisp("Nanatsumori","Kazama and Dahon.
I mean, we always hung out together right?");
MsgDisp("主人公","Ah......yes.
That's right.");
ChEye(4,2);
ChMouth(4,3);
VoicePlay("T020420000_04_050");
MsgDisp("Nanatsumori","It seems like my feelings for you have 
been known for a long time.");
MsgDisp("主人公","Eh?");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("T020420000_04_060");
MsgDisp("Nanatsumori","They both supported my feelings for you. 
In their own way.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("T020420000_04_070");
MsgDisp("Nanatsumori","Well......your feelings aside, 
Is this what they call male camaraderie?");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("T020420000_04_080");
MsgDisp("Nanatsumori","......They gave me the push I needed when
I was feeling shy. And now I'm here.");
MsgClear();
ChClose(4);
ChCustomLayout(4,5,0,-2.8);
Wait(60);
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,40,7,4,0,-1,-1,0,0,0,120);
VoiceEVSPlay(4);
VoicePlay("T020420000_04_090");
MsgDisp("Nanatsumori","｛主人公｝, I love you.");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,3,1);
VoicePlay("T020420000_04_100");
MsgDisp("Nanatsumori","Please go out with me.");
