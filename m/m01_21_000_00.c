SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","Nn?
Come in.");
SEPlay("EV_SE_DOOR_007");
SEWait();
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,255,7,0,4,-1,-1,0,0);
MsgDisp("主人公","｛みちる＊｝！");
ChEye(21,2);
ChMouth(21,2);
ChMotion(21,0);
VoicePlay("M012100000_21_000");
MsgDisp("Michiru","Mari......
I know my coming's a bother but
I was so worried, I just couldn't......");
MsgDisp("主人公","Hehe.
I'm all right now.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("M012100000_21_010");
MsgDisp("Michiru","......Really?");
MsgDisp("主人公","Mm, really.
Thanks for worrying about me ｛みちる＊｝.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("M012100000_21_020");
MsgDisp("Michiru","Thank goodness......");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("M012100000_21_030");
MsgDisp("Michiru","Hikaru is also very worried. But, both of
us pushing ourselves on you would be a
burden. So, I came as the representative.");
MsgDisp("主人公","That so.
I made ｛ひかる＊｝ worry too.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("M012100000_21_040");
MsgDisp("Michiru","Hehe.
Once she knows about Mari's recovery, 
I'm sure she'll be relieved.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("M012100000_21_050");
MsgDisp("Michiru","As a get well gift, I brought some 
jelly kashi from Himetsubakiya. So eat it
later, yes? It's gentle on your throat.");
MsgDisp("主人公","Thank you.
Next week, I'll see you at school.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("M012100000_21_060");
MsgDisp("Michiru","......For sure, right?
For today, rest well.
Then, let us meet next week.");
MsgClose();
SEPlay("EV_SE_690",0.2,0.2);
BGMStop();
ChClose(21);
Wait(50,1);
SEPlay("EV_SE_DOOR_008",0.5);
SEWait();
MsgDisp("主人公","(Since ｛みちる＊｝ came to 
pay me a get well visit,
I better get better fast.)");
