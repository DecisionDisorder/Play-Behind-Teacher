using UnityEngine;
using System.Collections;
using System;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;

/// <summary>
/// 데이터 직렬화 클래스
/// </summary>
public class SerializationData : MonoBehaviour {

    /// <summary>
    /// 직렬화를 진행할 Formatter
    /// </summary>
    public static BinaryFormatter binaryFormatter = new BinaryFormatter();

    /// <summary>
    /// 오브젝트 직렬화
    /// </summary>
    /// <param name="obj">직렬화 대상 오브젝트</param>
    /// <returns>직렬화 결과</returns>
    public static string SetSerialization(object obj)
    {
        MemoryStream memorystream = new MemoryStream();
        binaryFormatter.Serialize(memorystream, obj);

        return Convert.ToBase64String(memorystream.ToArray());
    }

    /// <summary>
    /// 오브젝트 역직렬화
    /// </summary>
    /// <param name="sampleSerializationed">직렬화된 문자열</param>
    /// <returns>역직렬화된 오브젝트</returns>
    public static object GetDeSerialization(string sampleSerializationed)
    {
        MemoryStream memorystream = new MemoryStream(Convert.FromBase64String(sampleSerializationed));
        return binaryFormatter.Deserialize(memorystream);
    }

    /// <summary>
    /// 문자열 -> byte 배열로 변환
    /// </summary>
    /// <param name="str">대상 문자열</param>
    /// <returns>변환된 byte 배열</returns>
    public static byte[] StringToByte(string str)
    {
        byte[] strByte = System.Text.Encoding.UTF8.GetBytes(str);
        return strByte;
    }
    /// <summary>
    /// byte 배열 -> 문자열 변환
    /// </summary>
    /// <param name="bytes">변환할 byte 배열</param>
    /// <returns>변환된 문자열</returns>
    public static string ByteToString(byte[] bytes)
    {
        System.Text.UTF8Encoding enc = new System.Text.UTF8Encoding();
        string str = enc.GetString(bytes);
        return str;
    }
}
